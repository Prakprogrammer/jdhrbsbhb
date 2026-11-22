# Build: a static Linux binary (glibc linked statically), no runtime dependencies.
FROM rust:1-bookworm AS build
WORKDIR /src
COPY Cargo.toml Cargo.lock ./
COPY src ./src
ENV RUSTFLAGS="-C target-cpu=x86-64-v3 -C target-feature=+crt-static"
RUN cargo build --release --locked --target x86_64-unknown-linux-gnu \
 && cp target/x86_64-unknown-linux-gnu/release/pipeline /pipeline

# Run: nothing but the binary. Reads DATA_DIR, writes OUTPUT_DIR.
FROM scratch
COPY --from=build /pipeline /pipeline
USER 1000:1000
ENTRYPOINT ["/pipeline"]
