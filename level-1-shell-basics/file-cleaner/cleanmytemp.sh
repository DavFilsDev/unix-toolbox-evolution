#!/bin/bash
# cleanmytemp.sh - Basic file cleaner
# Level 1 - Project 1

echo "File Cleaner - Starting..."
echo ""

# Show current disk usage
echo "Current disk usage in /tmp:"
du -sh /tmp 2>/dev/null || echo "Cannot check /tmp usage"
echo ""

# Ask user for confirmation
read -p "Clean temporary files? (y/n): " user_answer

if [ "$user_answer" = "y" ]; then
    echo "Cleaning files in /tmp (older than 7 days)..."
    
    # Remove files older than 7 days from /tmp
    find /tmp -type f -mtime +7 -delete 2>/dev/null
    
    echo "Cleaning user cache..."
    # Clean .cache directory if it exists
    if [ -d "$HOME/.cache" ]; then
        rm -rf "$HOME/.cache"/* 2>/dev/null
        echo "User cache cleaned."
    fi
    
    echo "Cleanup completed!"
else
    echo "Cancelled by user."
    exit 0
fi