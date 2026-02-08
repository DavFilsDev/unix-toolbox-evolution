# Process Watcher Documentation

## Overview
A Bash script that monitors a running process by name and displays its CPU and memory usage in real time.

This project focuses on loops, condition checking, and process management.

## Features
- Monitor a process by name
- Displays PID, CPU usage, and memory usage
- Refreshes output at regular intervals
- Alerts when the process stops
- Simple command-line usage

## Usage
```bash
# Make executable
chmod +x process-watcher.sh

# Monitor a process
./process-watcher.sh bash
````

## Configuration

You can adjust the refresh interval inside the script:

```bash
INTERVAL=3
```

## Commands Learned

* `pgrep` – Find process ID by name
* `ps` – Process status and resource usage
* `while` loop – Continuous monitoring
* `sleep` – Delay execution
* `date` – Timestamp output
* Positional parameters `$1`
* Conditional expressions `[[ ]]`

## Safety Notes

* Read-only monitoring (no process termination)
* Safe for system and user processes
* Terminates cleanly with `Ctrl+C`