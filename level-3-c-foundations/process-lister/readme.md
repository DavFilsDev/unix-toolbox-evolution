# Process Lister (C System Programming)

## Overview
A simple C program that lists running processes by reading the Linux `/proc` filesystem, similar to a minimal `ps` utility.

This project demonstrates directory traversal, process inspection, and Linux system programming fundamentals.

## Features
- Lists process IDs (PID)
- Displays process names
- Reads data directly from `/proc`
- Lightweight and fast

## Files
- `process_lister.c` – Main C source code
- `Makefile` – Build automation
- `README.md` – Documentation

## Compilation
```bash
make
````

## Usage

```bash
./process_lister
```

## Concepts Learned

* Linux `/proc` filesystem
* Directory handling with `opendir` and `readdir`
* File reading in C
* String handling and filtering numeric directories
* Makefiles and compiler flags

## Safety Notes

* Read-only process inspection
* No root privileges required
* No process modification or termination