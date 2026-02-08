
# Memory Monitor (C System Programming)

## Overview
A C program that reads system memory statistics from `/proc/meminfo` and displays RAM usage information.

This project introduces Linux system programming and interaction with kernel-provided virtual files.

## Features
- Displays total RAM
- Shows free and available memory
- Calculates used memory
- Reads directly from `/proc/meminfo`
- Lightweight and fast

## Files
- `memory_monitor.c` – Main C source code
- `Makefile` – Build automation
- `README.md` – Documentation

## Compilation
```bash
make
````

## Usage

```bash
./memory_monitor
```

## Concepts Learned

* Linux virtual filesystem `/proc`
* File I/O in C
* `fopen`, `fscanf`, `fclose`
* System-level resource monitoring
* Makefiles and compilation flags

## Safety Notes

* Read-only system access
* No memory allocation required
* No root privileges needed
