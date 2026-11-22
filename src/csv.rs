//! The CSV dialect of the rules: `\n` ends a line, `\r` is ordinary data,
//! a field may be wrapped in double quotes as a whole, any other quote makes
//! the line malformed, and a line must have exactly the expected field count.

/// Iterates the data lines of a file: the header line is skipped, and the
/// empty piece after a final `\n` is not a line. Empty lines in the middle
/// are returned (they are malformed and get dropped by `fields`).
pub fn data_lines(buf: &[u8]) -> impl Iterator<Item = &[u8]> {
    let start = match memchr(b'\n', buf) {
        Some(i) => i + 1,
        None => buf.len(),
    };
    let body = &buf[start..];
    let body = if body.last() == Some(&b'\n') { &body[..body.len() - 1] } else { body };
    let empty = body.is_empty();
    body.split(|&c| c == b'\n').filter(move |_| !empty)
}

#[inline]
pub fn memchr(c: u8, s: &[u8]) -> Option<usize> {
    s.iter().position(|&x| x == c)
}

/// Splits one line into exactly `N` unquoted fields, or `None` if malformed.
#[inline]
pub fn fields<const N: usize>(line: &[u8]) -> Option<[&[u8]; N]> {
    let mut out: [&[u8]; N] = [&[]; N];
    let mut n = 0;
    for raw in line.split(|&c| c == b',') {
        if n == N {
            return None;
        }
        out[n] = unquote(raw)?;
        n += 1;
    }
    if n != N {
        return None;
    }
    Some(out)
}

#[inline]
fn unquote(f: &[u8]) -> Option<&[u8]> {
    if !f.contains(&b'"') {
        return Some(f);
    }
    let l = f.len();
    if l >= 2 && f[0] == b'"' && f[l - 1] == b'"' && !f[1..l - 1].contains(&b'"') {
        Some(&f[1..l - 1])
    } else {
        None
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn quoting() {
        assert_eq!(fields::<2>(b"\"u1\",b"), Some([&b"u1"[..], &b"b"[..]]));
        assert_eq!(fields::<2>(b"\"\",b"), Some([&b""[..], &b"b"[..]]));
        assert_eq!(fields::<2>(b"a\"b,c"), None);
        assert_eq!(fields::<2>(b"\"a,c"), None);
        assert_eq!(fields::<2>(b"\",c"), None);
        assert_eq!(fields::<2>(b"a,b,c"), None);
        assert_eq!(fields::<2>(b"a"), None);
        assert_eq!(fields::<2>(b""), None);
        assert_eq!(fields::<2>(b" a,b\r"), Some([&b" a"[..], &b"b\r"[..]]));
    }
    #[test]
    fn lines() {
        let v: Vec<&[u8]> = data_lines(b"h\na\n\nb\n").collect();
        assert_eq!(v, vec![&b"a"[..], &b""[..], &b"b"[..]]);
        let v: Vec<&[u8]> = data_lines(b"h\na").collect();
        assert_eq!(v, vec![&b"a"[..]]);
        assert_eq!(data_lines(b"h\n").count(), 0);
        assert_eq!(data_lines(b"h").count(), 0);
    }
}
