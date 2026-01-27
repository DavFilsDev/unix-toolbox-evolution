#!/bin/bash
# cleanmytemp.sh - Basic file cleaner
# Level 1 - Project 1

echo "File Cleaner - Starting..."
echo ""

# Ask user for confirmation
read -p "Clean temporary files? (y/n): " user_answer

if [ "$user_answer" = "y" ]; then
    echo "Cleaning files in /tmp (older than 7 days)..."
    
    # Remove files older than 7 days from /tmp
    find /tmp -type f -mtime +7 -delete
    
    echo "Cleanup completed!"
else
    echo "Cancelled by user."
    exit 0
fi