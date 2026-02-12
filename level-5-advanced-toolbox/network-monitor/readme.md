# Network Monitor – Advanced Linux Connection Watcher

## Overview
A modular C and Bash tool that monitors TCP connections, computes statistics, and detects suspicious network activity.

## Features
- Parses `/proc/net/tcp`
- Lists active connections
- Computes connection statistics
- Detects suspicious ports
- Modular C architecture
- Bash automation logging

## Build
```bash
make
````

## Run

```bash
./network_monitor
```

## Automated Logging

```bash
bash scripts/network_monitor.sh
```

## Concepts Learned

* Linux networking internals
* System programming in C
* Modular architecture
* Cybersecurity monitoring basics