# Auto Maintenance System (Bash + C Integration)

## Overview
A smart system maintenance tool written in modular C with a Bash automation script.
It cleans temporary files, removes large logs, and monitors disk usage.

## Features
- Temporary files cleanup (/tmp)
- Large log file cleanup
- Disk usage monitoring with warning threshold
- Modular C architecture
- Bash automation launcher

## Build
```bash
make
````

## Run

```bash
./auto_maintenance
# or
./scripts/auto_maintenance.sh
```

## Architecture

* `temp_cleaner.c` → Temporary file cleanup
* `log_cleaner.c` → Log cleanup
* `disk_check.c` → Disk monitoring
* `main.c` → Orchestrator
* `maintenance.h` → Shared interface

## Concepts Learned

* System maintenance automation
* Linux filesystem management
* statvfs disk monitoring
* Modular C architecture
* Bash + C integration