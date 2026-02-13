# Custom Commands – Enhanced Unix Utilities

## Overview
Custom Commands is a modular C toolbox that reimplements and extends common Unix utilities such as ls, cat, grep, and system information tools.

## Features
- Custom ls directory listing
- Cat with line numbering
- Grep-like text search
- System information command
- Modular C architecture
- Install script for system-wide usage

## Build
```bash
make
````

## Usage

```bash
./customcmd ls
./customcmd cat file.txt
./customcmd grep hello file.txt
./customcmd sysinfo
```

## Install System-wide

```bash
bash scripts/install_custom_cmds.sh
```

## Learning Goals

* Rebuilding core Unix utilities
* Command dispatching architecture
* POSIX system calls
* Modular C programming
* Linux toolchain workflows
