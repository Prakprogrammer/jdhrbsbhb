//! Minimal Parquet writer: one row group per file, one PLAIN data page (v1)
//! per column, uncompressed, no statistics. Strings are written straight
//! from borrowed slices, so building the output allocates nothing per row.
//! The footer is Thrift compact protocol, encoded by hand below.

use std::io;
use std::path::Path;

/// One output column.
pub enum Col<'a> {
    /// INT32 with the DATE logical type (days since the epoch).
    Date(&'a [i32]),
    I64(&'a [i64]),
    /// Required UTF-8 string.
    Str(&'a [&'a [u8]]),
    /// Nullable UTF-8 string.
    OptStr(&'a [Option<&'a [u8]>]),
}

impl Col<'_> {
    fn len(&self) -> usize {
        match self {
            Col::Date(v) => v.len(),
            Col::I64(v) => v.len(),
            Col::Str(v) => v.len(),
            Col::OptStr(v) => v.len(),
        }
    }
    fn slice(&self, a: usize, b: usize) -> Col<'_> {
        match self {
            Col::Date(v) => Col::Date(&v[a..b]),
            Col::I64(v) => Col::I64(&v[a..b]),
            Col::Str(v) => Col::Str(&v[a..b]),
            Col::OptStr(v) => Col::OptStr(&v[a..b]),
        }
    }
}

// Parquet enum values.
const T_INT32: i32 = 1;
const T_INT64: i32 = 2;
const T_BYTE_ARRAY: i32 = 6;
const REQUIRED: i32 = 0;
const OPTIONAL: i32 = 1;
const CONV_UTF8: i32 = 0;
const CONV_DATE: i32 = 6;
const ENC_PLAIN: i32 = 0;
const ENC_RLE: i32 = 3;
const PAGE_DATA: i32 = 0;
const CODEC_NONE: i32 = 0;

// Thrift compact protocol type ids.
const CT_I32: u8 = 5;
const CT_I64: u8 = 6;
const CT_BINARY: u8 = 8;
const CT_LIST: u8 = 9;
const CT_STRUCT: u8 = 12;

/// Thrift compact protocol encoder (only what the Parquet footer needs).
struct Thrift {
    b: Vec<u8>,
    last: Vec<i16>,
}

impl Thrift {
    fn new() -> Self {
        Thrift { b: Vec::new(), last: vec![0] }
    }
    fn varint(&mut self, mut v: u64) {
        while v >= 0x80 {
            self.b.push(v as u8 | 0x80);
            v >>= 7;
        }
        self.b.push(v as u8);
    }
    fn zigzag(&mut self, v: i64) {
        self.varint(((v << 1) ^ (v >> 63)) as u64);
    }
    fn field(&mut self, id: i16, ty: u8) {
        let last = self.last.last_mut().unwrap();
        let d = id - *last;
        *last = id;
        if (1..=15).contains(&d) {
            self.b.push((d as u8) << 4 | ty);
        } else {
            self.b.push(ty);
            self.zigzag(id as i64);
        }
    }
    fn i32(&mut self, id: i16, v: i32) {
        self.field(id, CT_I32);
        self.zigzag(v as i64);
    }
    fn i64(&mut self, id: i16, v: i64) {
        self.field(id, CT_I64);
        self.zigzag(v);
    }
    fn bin(&mut self, id: i16, v: &[u8]) {
        self.field(id, CT_BINARY);
        self.varint(v.len() as u64);
        self.b.extend_from_slice(v);
    }
    /// Starts a struct-typed field.
    fn begin(&mut self, id: i16) {
        self.field(id, CT_STRUCT);
        self.last.push(0);
    }
    /// Starts a struct that is a list element (no field header).
    fn begin_elem(&mut self) {
        self.last.push(0);
    }
    fn end(&mut self) {
        self.b.push(0);
        self.last.pop();
    }
    fn list(&mut self, id: i16, elem: u8, n: usize) {
        self.field(id, CT_LIST);
        if n < 15 {
            self.b.push((n as u8) << 4 | elem);
        } else {
            self.b.push(0xF0 | elem);
            self.varint(n as u64);
        }
    }
    fn i32_list(&mut self, id: i16, v: &[i32]) {
        self.list(id, CT_I32, v.len());
        for &x in v {
            self.zigzag(x as i64);
        }
    }
}

/// Appends one column chunk (page header + PLAIN page) to `f` and returns
/// (data page offset, chunk size).
fn write_chunk(f: &mut Vec<u8>, col: &Col) -> (usize, usize) {
    let n = col.len();
    let mut page: Vec<u8> = Vec::new();
    match col {
        Col::Date(v) => {
            page.reserve(n * 4);
            for x in v.iter() {
                page.extend_from_slice(&x.to_le_bytes());
            }
        }
        Col::I64(v) => {
            page.reserve(n * 8);
            for x in v.iter() {
                page.extend_from_slice(&x.to_le_bytes());
            }
        }
        Col::Str(v) => {
            page.reserve(v.iter().map(|s| 4 + s.len()).sum());
            for s in v.iter() {
                page.extend_from_slice(&(s.len() as u32).to_le_bytes());
                page.extend_from_slice(s);
            }
        }
        Col::OptStr(v) => {
            // Definition levels (bit width 1) as one bit-packed run, with the
            // 4-byte length prefix data page v1 requires.
            let groups = n.div_ceil(8);
            let mut lv = Thrift::new();
            lv.varint(((groups as u64) << 1) | 1);
            let mut bits = vec![0u8; groups];
            for (i, x) in v.iter().enumerate() {
                if x.is_some() {
                    bits[i / 8] |= 1 << (i % 8);
                }
            }
            lv.b.extend_from_slice(&bits);
            page.extend_from_slice(&(lv.b.len() as u32).to_le_bytes());
            page.extend_from_slice(&lv.b);
            for s in v.iter().flatten() {
                page.extend_from_slice(&(s.len() as u32).to_le_bytes());
                page.extend_from_slice(s);
            }
        }
    }
    let mut h = Thrift::new();
    h.i32(1, PAGE_DATA);
    h.i32(2, page.len() as i32);
    h.i32(3, page.len() as i32);
    h.begin(5);
    h.i32(1, n as i32);
    h.i32(2, ENC_PLAIN);
    h.i32(3, ENC_RLE);
    h.i32(4, ENC_RLE);
    h.end();
    h.b.push(0);
    let off = f.len();
    f.extend_from_slice(&h.b);
    f.extend_from_slice(&page);
    (off, h.b.len() + page.len())
}

fn phys_type(c: &Col) -> i32 {
    match c {
        Col::Date(_) => T_INT32,
        Col::I64(_) => T_INT64,
        Col::Str(_) | Col::OptStr(_) => T_BYTE_ARRAY,
    }
}

/// Encodes one Parquet file holding `cols` (all the same length).
fn encode(cols: &[(&str, Col)]) -> Vec<u8> {
    let n = cols.first().map_or(0, |c| c.1.len());
    assert!(cols.iter().all(|c| c.1.len() == n), "columns differ in length");
    assert!(n <= i32::MAX as usize, "too many rows for one page");
    let mut f = b"PAR1".to_vec();
    let chunks: Vec<(usize, usize)> = cols.iter().map(|(_, c)| write_chunk(&mut f, c)).collect();

    let mut m = Thrift::new();
    m.i32(1, 1); // version
    m.list(2, CT_STRUCT, cols.len() + 1); // schema
    m.begin_elem();
    m.bin(4, b"schema");
    m.i32(5, cols.len() as i32);
    m.end();
    for (name, c) in cols {
        m.begin_elem();
        m.i32(1, phys_type(c));
        m.i32(3, if matches!(c, Col::OptStr(_)) { OPTIONAL } else { REQUIRED });
        m.bin(4, name.as_bytes());
        match c {
            Col::Date(_) => {
                m.i32(6, CONV_DATE);
                m.begin(10); // LogicalType
                m.begin(6); // DATE
                m.end();
                m.end();
            }
            Col::Str(_) | Col::OptStr(_) => {
                m.i32(6, CONV_UTF8);
                m.begin(10);
                m.begin(1); // STRING
                m.end();
                m.end();
            }
            Col::I64(_) => {}
        }
        m.end();
    }
    m.i64(3, n as i64);
    m.list(4, CT_STRUCT, 1); // row_groups
    m.begin_elem();
    m.list(1, CT_STRUCT, cols.len()); // columns
    let total: usize = chunks.iter().map(|c| c.1).sum();
    for ((name, c), &(off, size)) in cols.iter().zip(&chunks) {
        m.begin_elem();
        m.i64(2, off as i64); // file_offset
        m.begin(3); // ColumnMetaData
        m.i32(1, phys_type(c));
        m.i32_list(2, &[ENC_PLAIN, ENC_RLE]);
        m.list(3, CT_BINARY, 1);
        m.varint(name.len() as u64);
        m.b.extend_from_slice(name.as_bytes());
        m.i32(4, CODEC_NONE);
        m.i64(5, n as i64);
        m.i64(6, size as i64);
        m.i64(7, size as i64);
        m.i64(9, off as i64);
        m.end();
        m.end();
    }
    m.i64(2, total as i64);
    m.i64(3, n as i64);
    m.end();
    m.bin(6, b"shopping-sessions");
    m.b.push(0);

    f.extend_from_slice(&m.b);
    f.extend_from_slice(&(m.b.len() as u32).to_le_bytes());
    f.extend_from_slice(b"PAR1");
    f
}

/// Writes a table into `dir` as `parts` files (row ranges), in parallel.
pub fn write_table(dir: &Path, cols: &[(&str, Col)], parts: usize) -> io::Result<()> {
    use rayon::prelude::*;
    std::fs::create_dir_all(dir)?;
    let n = cols.first().map_or(0, |c| c.1.len());
    let parts = parts.clamp(1, n.max(1));
    (0..parts).into_par_iter().try_for_each(|p| {
        let (a, b) = (n * p / parts, n * (p + 1) / parts);
        let sub: Vec<(&str, Col)> = cols.iter().map(|(name, c)| (*name, c.slice(a, b))).collect();
        std::fs::write(dir.join(format!("part-{p}.parquet")), encode(&sub))
    })
}
