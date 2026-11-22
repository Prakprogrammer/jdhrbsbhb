# Runs the team's prebuilt pipeline binary (bin/pipeline.bin.gz, a static
# x86-64 Linux executable). Our own Rust pipeline builds with Dockerfile.rust.
FROM busybox:1.36.1 AS unpack
COPY bin/pipeline.bin.gz /pipeline.gz
RUN gunzip -c /pipeline.gz > /pipeline && chmod 755 /pipeline

FROM scratch
COPY --from=unpack /pipeline /pipeline
USER 1000:1000
ENTRYPOINT ["/pipeline", "/data", "/output"]
