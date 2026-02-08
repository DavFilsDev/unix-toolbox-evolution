# System Dashboard (Bash + C Integration)

## Overview
A modular system monitoring dashboard written in C with a Bash launcher.  
This project follows clean architecture with separate modules for CPU, memory, and disk monitoring.

## Features
- CPU load monitoring
- RAM usage monitoring
- Disk space monitoring
- Modular C architecture
- Bash integration launcher
- Makefile build system

## Build
```bash
make
````

## Run

```bash
./system_dashboard
# or
./scripts/dashboard.sh
```

## Architecture

* `cpu.c` → CPU metrics
* `memory.c` → RAM metrics
* `disk.c` → Disk metrics
* `main.c` → Program orchestrator
* `dashboard.h` → Shared interface

## Concepts Learned

* Modular C design
* Header files and separation of concerns
* Linux system metrics APIs
* Makefiles
* Bash + C integration