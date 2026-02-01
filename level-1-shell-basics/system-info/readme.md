
# File: level-1-shell-basics/system-info/README.md
# System Info Script Documentation

## Overview
A simple Bash script that displays essential system information such as OS details, CPU, memory, disk usage, and uptime.

This script is designed for beginners to practice basic Linux commands and shell scripting.

## Features
- Displays hostname and current user
- Shows operating system and kernel version
- Displays system architecture
- Shows system uptime
- Displays CPU model
- Shows memory usage
- Displays root disk usage

## Usage
```bash
# Make executable
chmod +x system-info.sh

# Run the script
./system-info.sh
````

## Commands Learned

* `hostname` – Show system hostname
* `whoami` – Display current user
* `uname` – System and kernel information
* `uptime` – System running time
* `lscpu` – CPU details
* `free` – Memory usage
* `df` – Disk usage
* `echo` – Output text
* Command substitution `$(...)`

## Notes

* Read-only script (no system modification)
* Safe to run on any Linux system
* Suitable for learning and demonstrations