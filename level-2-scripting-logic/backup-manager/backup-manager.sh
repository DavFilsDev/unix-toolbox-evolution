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
    echo "Backup completed successfully "
else
    echo "Backup failed "
    exit 1
fi

# Show backup size
echo
echo "Backup size:"
du -h "$BACKUP_DIR/$BACKUP_FILE"

echo "=============================="
echo "        BACKUP FINISHED       "
echo "=============================="
