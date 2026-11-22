//! Parquet output (baseline: the `parquet` crate's low-level column writer).

use parquet::basic::Compression;
use parquet::data_type::{ByteArray, ByteArrayType, Int32Type, Int64Type};
use parquet::file::properties::WriterProperties;
use parquet::file::writer::SerializedFileWriter;
use parquet::schema::parser::parse_message_type;
use std::fs::File;
use std::path::Path;
use std::sync::Arc;

pub struct UserRows {
    pub user_id: Vec<ByteArray>,
    pub day: Vec<i32>,
    pub sessions: Vec<i64>,
    pub events: Vec<i64>,
    pub revenue: Vec<i64>,
    /// `None` = null.
    pub top: Vec<Option<ByteArray>>,
}

pub struct CampRows {
    pub campaign_id: Vec<ByteArray>,
    pub channel: Vec<ByteArray>,
    pub day: Vec<i32>,
    pub sessions: Vec<i64>,
    pub purchasing: Vec<i64>,
    pub revenue: Vec<i64>,
    pub assisted: Vec<i64>,
}

fn props() -> Arc<WriterProperties> {
    Arc::new(
        WriterProperties::builder()
            .set_compression(Compression::UNCOMPRESSED)
            .set_dictionary_enabled(false)
            .set_statistics_enabled(parquet::file::properties::EnabledStatistics::None)
            .build(),
    )
}

macro_rules! col {
    ($rg:expr, $t:ty, $vals:expr) => {{
        let mut c = $rg.next_column()?.expect("column");
        c.typed::<$t>().write_batch($vals, None, None)?;
        c.close()?;
    }};
}

pub fn write_user(dir: &Path, r: &UserRows) -> parquet::errors::Result<()> {
    let schema = Arc::new(parse_message_type(
        "message user_daily {
            required binary user_id (UTF8);
            required int32 day (DATE);
            required int64 sessions;
            required int64 events;
            required int64 revenue_cents;
            optional binary top_category (UTF8);
        }",
    )?);
    std::fs::create_dir_all(dir).ok();
    let f = File::create(dir.join("part-0.parquet"))?;
    let mut w = SerializedFileWriter::new(f, schema, props())?;
    let mut rg = w.next_row_group()?;
    col!(rg, ByteArrayType, &r.user_id);
    col!(rg, Int32Type, &r.day);
    col!(rg, Int64Type, &r.sessions);
    col!(rg, Int64Type, &r.events);
    col!(rg, Int64Type, &r.revenue);
    {
        let vals: Vec<ByteArray> = r.top.iter().flatten().cloned().collect();
        let defs: Vec<i16> = r.top.iter().map(|x| x.is_some() as i16).collect();
        let mut c = rg.next_column()?.expect("column");
        c.typed::<ByteArrayType>().write_batch(&vals, Some(&defs), None)?;
        c.close()?;
    }
    rg.close()?;
    w.close()?;
    Ok(())
}

pub fn write_camp(dir: &Path, r: &CampRows) -> parquet::errors::Result<()> {
    let schema = Arc::new(parse_message_type(
        "message campaign_daily {
            required binary campaign_id (UTF8);
            required binary channel (UTF8);
            required int32 day (DATE);
            required int64 sessions;
            required int64 purchasing_sessions;
            required int64 revenue_cents;
            required int64 assisted_sessions;
        }",
    )?);
    std::fs::create_dir_all(dir).ok();
    let f = File::create(dir.join("part-0.parquet"))?;
    let mut w = SerializedFileWriter::new(f, schema, props())?;
    let mut rg = w.next_row_group()?;
    col!(rg, ByteArrayType, &r.campaign_id);
    col!(rg, ByteArrayType, &r.channel);
    col!(rg, Int32Type, &r.day);
    col!(rg, Int64Type, &r.sessions);
    col!(rg, Int64Type, &r.purchasing);
    col!(rg, Int64Type, &r.revenue);
    col!(rg, Int64Type, &r.assisted);
    rg.close()?;
    w.close()?;
    Ok(())
}
