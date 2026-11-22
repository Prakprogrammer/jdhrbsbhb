# Shopping Sessions: build plan

Track: Databricks "Shopping Sessions" (joinbuilders.org buildathon).
Goal: our own pipeline, written from scratch, that turns the dirty click-stream CSVs into the two exact Parquet tables as fast as possible.
Deadline: **Sun 11:00 AM EST** (date to confirm). Plan written at about 02:30 AM EST.

## Ground rules

- **From scratch.** `rules.md` is the only source of truth. No code is copied from or decompiled out of the express-lane binary (`m1`).
- **Same techniques, our own code.** We reuse the *ideas* in the express-lane design (listed under Phase 2), not its implementation.
- **Optional oracle:** run `m1` as a black box to compare outputs on large generated data. Use none of its code. *(Needs user OK.)*
- **Not copied:**
  - ID key recovery. The current generator uses a keyed Feistel bijection, and the spec says IDs must be treated as opaque strings.
  - The probe that writes measurement text into the output tables.
- **Correctness first.** A wrong table scores zero, so each speed step is checked against the baseline's output before it's kept.

## Scoring recap

- Correct output on all 36 fixtures and the 1M dev set is required. The dev set must finish in under 3 minutes.
- Score = container wall time, from start to exit, including engine start-up and CSV reading. Lower is better.
- Practice runs on about 20M hidden events. The final runs on about 60M new events, 3 runs, each capped at 3 minutes, median scored.
- Limits: 8 vCPU, 24 GB RAM, no network at run time, `/data` read-only, `/scratch` writable, uid 1000, linux/amd64 image of at most 8 GB.
- At most 2 submissions per hour. A rejected submission doesn't lower the best score.

## Setup

| Piece | Where |
|---|---|
| Source code (edited here) | `/home/omen/shopping-sessions/` (this folder) |
| Build and test box | Azure VM `shopvm` (`ssh shopvm`), Xeon Platinum 8272CL (Cascade Lake, AVX-512), 4 vCPU, 16 GB, Japan East, about $0.25/hr |
| Track kit on the VM | `~/work/kit/`: `rules.md`, `generator.zip`, `dev-answer.zip`, `starter-duckdb.zip`, `starter-polars.zip` (these include the fixtures and `scripts/compare.py` / `run_fixtures.py`) |
| Friend's repo on the VM | `~/work/express-lane-main/` (reference only) |

Loop: edit locally → `rsync` to the VM → build and test there.

Note: the VM has 4 vCPUs (the student quota blocks 8), so its timings will be slower than the scorer's.

## Phases

### Phase 0: test setup (~30 min) *(background agent)*
- [ ] Unpack the kit and build the generator.
- [ ] Generate the 1M dev set (the seed that matches `dev-answer`) and a ~20M timing set.
- [ ] Wire up the starter kit's fixture runner and `compare.py` against our binary.
- [ ] Add a Docker run script that mimics the scorer (no network, read-only `/data`, CPU and memory limits).

### Phase 1: correct baseline (~2.5 h)
One static Rust binary that follows `rules.md` step by step, written for clarity rather than speed:
- [ ] Manifest and windows; CSV dialect (quotes, `\r`, field count, empty lines).
- [ ] Timestamps F1, F2 and F3 with full validation; window checks.
- [ ] Links: parse, union-find, name each person by the byte-wise smallest ID.
- [ ] Events: dedup on smallest `ingest_ts` before validating, then validate, then drop late events.
- [ ] Sessions per person: gaps over 30 min start a new session, equal timestamps share one, UTC day of the start.
- [ ] Clicks: dedup, validate, credit (latest click within 7 days, ties to the smallest `click_id`), `organic` fallback, assists.
- [ ] `user_daily` and `campaign_daily`, using a standard Parquet library at first.
- [ ] The rules' self-check: sums match across the two tables.
- [ ] **Pass all 36 fixtures and the dev set, then submit** (target about 5–6 AM).

### Phase 2: speed, using express-lane's techniques (~3.5 h)
Each step is diffed against the Phase 1 output before it's kept.
1. [ ] **Parallel parsing:** memory-map the files, split them into chunks for a work queue, a fast path for plain lines and a slow path for quoted or odd ones.
2. [ ] **Integer IDs:** pack short base36 IDs straight into a u64 and 32-hex IDs into 128 bits. The packing is lossless and keeps byte order, so no string hashing on the hot path.
3. [ ] **Radix sorts and partitioning by person** instead of hash maps.
4. [ ] **Union-find on integers,** with a special path for huge components (chains, shared devices).
5. [ ] **Per-person processing:** sessions, crediting and assists, with campaign bitmasks for assists.
6. [ ] **Own minimal Parquet writer** (plain/dictionary pages, DATE logical type) for less start-up and write time.
7. [ ] **Process tricks:** static musl binary, `target-cpu=cascadelake`, LTO, huge pages and pre-faulted memory, thread pinning, our own arena allocator, `_exit` without freeing memory.
8. [ ] **Safety net:** run the self-checks and fall back to the Phase 1 code path, inside the same binary, if any check or capacity guard fails.

### Phase 3: ship (~1 h)
- [ ] Dockerfile: Rust build stage → `FROM scratch` image holding only the static binary.
- [ ] Run under scorer-like limits on the VM and check the output again.
- [ ] Push to the team's public GitHub repo *(user does this)* and submit.
- [ ] Use the remaining 2-per-hour submissions on the best variant.

## Risks
- **Time:** Phase 1 has to be right before Phase 2 starts.
- **Edge cases:** F2 offsets that change the date, quoted fields, trailing `\r`, case-sensitive IDs, click ties at the same millisecond, February 29, gaps of exactly 30:00.000.
- **Timing gap:** results on the 4-vCPU VM won't match the 8-vCPU scorer.

## Open questions for the user
1. OK to run `m1` as a black-box oracle for comparing output?
2. Is the deadline **today** (Sun) at 11:00 AM EST?
3. Which **public GitHub repo** do we submit from?

## After the buildathon
- **Deallocate** the VM `shopvm` in the Azure portal; shutting down from inside Linux keeps billing. Delete the `shopvm_group` resource group when done.
