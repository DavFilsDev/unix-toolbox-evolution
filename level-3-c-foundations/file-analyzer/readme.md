# File: level-3-c-foundations/file-analyzer/README.md
# File Analyzer (C System Programming)

## Overview
A C program that analyzes a file and displays basic statistics such as number of characters, words, and lines.

This project introduces low-level file handling and system programming concepts in C.

## Features
- Counts characters in a file
- Counts words using whitespace detection
- Counts lines
- Handles file errors safely
- Command-line argument support

## Files
- `file_analyzer.c` – Main C source code
- `Makefile` – Build automation file
- `README.md` – Documentation

## Compilation
```bash
make
````

## Usage

```bash
./file_analyzer <filename>
```

Example:

```bash
./file_analyzer sample.txt
```

## Concepts Learned

* `fopen`, `fgetc`, `fclose` – File handling
* Command-line arguments (`argc`, `argv`)
* Loops and conditionals in C
* Character classification (`ctype.h`)
* Basic system programming
* Makefiles

## Safety Notes

* Read-only file access
* Graceful error handling
* No memory allocation required