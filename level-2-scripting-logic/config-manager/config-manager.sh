#!/bin/bash

# Config Manager Script
# Simple dotfile backup and restore tool

ACTION="$1"
BACKUP_DIR="$HOME/dotfiles_backup"
DOTFILES=(
    ".bashrc"
    ".profile"
    ".vimrc"
)

echo "        CONFIG MANAGER        "

if [[ -z "$ACTION" ]]; then
    echo "Usage: ./config-manager.sh [backup|restore]"
    exit 1
fi

# Create backup directory if needed
mkdir -p "$BACKUP_DIR"

case "$ACTION" in
    backup)
        echo "Starting dotfiles backup..."
        for file in "${DOTFILES[@]}"; do
            if [[ -f "$HOME/$file" ]]; then
                cp "$HOME/$file" "$BACKUP_DIR/"
                echo "Backed up $file"
            else
                echo "Skipped $file (not found)"
            fi
        done
        echo "Backup completed "
        ;;
    restore)
        echo "Restoring dotfiles..."
        for file in "${DOTFILES[@]}"; do
            if [[ -f "$BACKUP_DIR/$file" ]]; then
                cp "$BACKUP_DIR/$file" "$HOME/"
                echo "Restored $file"
            else
                echo "Skipped $file (no backup)"
            fi
        done
        echo "Restore completed "
        ;;
    *)
        echo "Invalid action: $ACTION"
        echo "Usage: ./config-manager.sh [backup|restore]"
        exit 1
        ;;
esac
