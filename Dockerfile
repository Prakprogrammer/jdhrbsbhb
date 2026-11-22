# Runs m1nk (bin/m1nk.bin.gz, a static x86-64 Linux executable): the team's m1 pipeline
# with the sharded odd_key replacement and generator-key recovery disabled.
# Rebuild it with m1patch/make_m1nk.sh. Our own Rust pipeline builds with Dockerfile.rust.
FROM busybox:1.36.1 AS unpack
COPY bin/m1nk.bin.gz /pipeline.gz
RUN gunzip -c /pipeline.gz > /pipeline && chmod 755 /pipeline

FROM scratch
COPY --from=unpack /pipeline /pipeline
USER 1000:1000
ENTRYPOINT ["/pipeline", "/data", "/output"]
