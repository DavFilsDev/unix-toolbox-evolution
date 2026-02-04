# File: level-2-scripting-logic/config-manager/README.md
# Config Manager Documentation (Dotfiles)

## Overview
A Bash utility for managing personal configuration files (dotfiles) by backing them up and restoring them when needed.

This script introduces argument parsing, arrays, loops, and safe file operations.

## Features
- Backup common dotfiles
- Restore dotfiles from backup
- Uses command-line arguments
- Automatic backup directory creation
- Skips missing files safely

## Usage
```bash
# Make executable
chmod +x config-manager.sh

# Backup dotfiles
./config-manager.sh backup

# Restore dotfiles
./config-manager.sh restore
````

## Default Dotfiles

The script manages the following files:

* `.bashrc`
* `.profile`
* `.vimrc`

You can modify the list in the script:

```bash
DOTFILES=( ".bashrc" ".profile" ".vimrc" )
```

## Commands Learned

* `case` – Action selection
* Arrays in Bash
* `cp` – File copy
* `mkdir -p` – Safe directory creation
* `for` loops
* Positional arguments `$1`
* Conditional file checks `-f`

## Safety Notes

* No file deletion
* Existing files are overwritten only during restore
* Uses explicit file lists (no wildcards)
* Designed for personal configuration management