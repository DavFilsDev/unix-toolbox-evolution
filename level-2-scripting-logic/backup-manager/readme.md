Love the progression 🔥
This **level-2** step is exactly where your repo starts to look *serious* and *interview-ready*.

We’ll build a **real, useful intermediate script**: an **Automated Backup Manager**, still simple but with **logic, options, and safety**.

---

## 1️⃣ Directory structure

```text
level-2-scripting-logic/
└── backup-manager/
    ├── backup-manager.sh
    └── README.md
```

---

## 2️⃣ Script: `backup-manager/backup-manager.sh`

This script:

* Backs up a directory
* Uses timestamps
* Creates compressed archives
* Checks errors
* Uses variables & logic (level-2 skills)

```bash
#!/bin/bash

# Backup Manager Script
# Creates compressed backups of a given directory

SOURCE_DIR="$HOME/Documents"
BACKUP_DIR="$HOME/backups"
DATE=$(date +"%Y-%m-%d_%H-%M-%S")
BACKUP_FILE="backup_$DATE.tar.gz"

echo "=============================="
echo "        BACKUP MANAGER        "
echo "=============================="

# Check if source directory exists
if [[ ! -d "$SOURCE_DIR" ]]; then
    echo "Error: Source directory does not exist!"
    exit 1
fi

# Create backup directory if it doesn't exist
if [[ ! -d "$BACKUP_DIR" ]]; then
    echo "Creating backup directory..."
    mkdir -p "$BACKUP_DIR"
fi

echo "Starting backup..."
echo "Source: $SOURCE_DIR"
echo "Destination: $BACKUP_DIR/$BACKUP_FILE"

# Create backup
tar -czf "$BACKUP_DIR/$BACKUP_FILE" "$SOURCE_DIR" 2>/dev/null

# Check backup result
if [[ $? -eq 0 ]]; then
    echo "Backup completed successfully ✅"
else
    echo "Backup failed ❌"
    exit 1
fi

# Show backup size
echo
echo "Backup size:"
du -h "$BACKUP_DIR/$BACKUP_FILE"

echo "=============================="
echo "        BACKUP FINISHED       "
echo "=============================="
```

### Make executable

```bash
chmod +x backup-manager.sh
```

---

## 3️⃣ Commit message for the script

```text
feat: add automated backup manager bash script
```

---

## 4️⃣ README content

**File:** `level-2-scripting-logic/backup-manager/README.md`

````md
# File: level-2-scripting-logic/backup-manager/README.md
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