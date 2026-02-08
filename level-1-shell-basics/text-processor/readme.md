# Text Processor Documentation (AWK & SED)

## Overview
A beginner-friendly Bash script that demonstrates basic text processing using `awk` and `sed`.

This project focuses on understanding how to extract, filter, and transform text files from the command line.

## Features
- Extract specific columns using AWK
- Filter data based on conditions
- Replace words using SED
- Transform text (uppercase)
- Add line numbers to output
- Uses a simple CSV-like text file

## Files
- `sample.txt` – Input data for processing
- `text-processor.sh` – Main script
- `README.md` – Documentation

## Usage
```bash
# Make executable
chmod +x text-processor.sh

# Run the script
./text-processor.sh
````

## Commands Learned

* `awk` – Pattern scanning and processing
* `sed` – Stream editor for text transformation
* Field separator `-F`
* Conditions in AWK
* Regular expressions
* File existence checks
* `if` statements

## Safety Notes

* Read-only processing (no file modification)
* Uses standard input files
* Safe for learning and experimentation