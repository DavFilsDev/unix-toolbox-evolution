# Performance Logger (Bash + C Integration)

## Overview
A modular system performance metrics collector written in C with a Bash launcher.
It logs CPU, memory, and disk usage into a persistent log file.

## Features
- CPU load logging
- Memory usage logging
- Disk space logging
- Timestamped log entries
- Modular C architecture
- Bash integration script

## Build
```bash
make
````

## Run

```bash
./performance_logger
# or
./scripts/run_logger.sh
```

## Output

Logs are written to:

```
performance.log
```

## Architecture

* `cpu_logger.c` → CPU metrics
* `memory_logger.c` → RAM metrics
* `disk_logger.c` → Disk metrics
* `main.c` → Logging orchestrator
* `logger.h` → Shared interface

## Concepts Learned

* Modular C programming
* File logging in C
* Linux system metrics APIs
* Makefiles
* Bash + C integration