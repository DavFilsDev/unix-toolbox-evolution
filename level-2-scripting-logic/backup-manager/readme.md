# Backup Manager Documentation

## Overview
An intermediate Bash script that automates the backup of a directory by creating compressed archives with timestamps.

This project introduces scripting logic such as conditions, variables, error handling, and directory management.

## Features
- Automated backup of a source directory
- Timestamped backup archives
- Compressed backups using `tar.gz`
- Automatic backup directory creation
- Error detection and handling
- Displays backup file size

## Usage
```bash
# Make executable
chmod +x backup-manager.sh

# Run the script
./backup-manager.sh
````

## Default Configuration

* **Source directory:** `~/Documents`
* **Backup directory:** `~/backups`

You can modify these variables at the top of the script:

```bash
SOURCE_DIR="$HOME/Documents"
BACKUP_DIR="$HOME/backups"
```

## Commands Learned

* `tar` – Create compressed archives
* `date` – Generate timestamps
* `mkdir -p` – Create directories safely
* `if` statements – Conditional logic
* `$?` – Exit status checking
* `du` – File size display
* Output redirection `2>/dev/null`

## Safety Features

* Checks source directory existence
* Prevents script execution on missing paths
* Does not overwrite existing backups
* Read-only access to source files