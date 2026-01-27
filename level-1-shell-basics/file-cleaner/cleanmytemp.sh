#!/bin/bash
# cleanmytemp.sh - Basic file cleaner
# Level 1 - Project 1
# 
# Description: Cleans temporary files from /tmp and user cache
# Usage: ./cleanmytemp.sh
# Author: [Your Name]
# Date: $(date +%Y-%m-%d)
#
# Features:
# 1. Cleans files older than 7 days in /tmp
# 2. Cleans user cache directory
# 3. Shows disk usage before cleaning
# 4. Asks for user confirmati

echo "     SIMPLE FILE CLEANER"
echo ""

# Show current disk usage
echo "Current disk usage in /tmp:"
du -sh /tmp 2>/dev/null || echo "  Cannot check /tmp usage"
echo ""

# Ask user for confirmation
read -p " Clean temporary files? (y/n): " user_answer

if [ "$user_answer" = "y" ] || [ "$user_answer" = "Y" ]; then
    echo ""
    echo " Cleaning files in /tmp (older than 7 days)..."
    
    # find: search for files
    # /tmp: directory to search
    # -type f: only regular files (not directories)
    # -mtime +7: modified more than 7 days ago
    # -delete: remove found files
    # 2>/dev/null: hide permission denied errors
    find /tmp -type f -mtime +7 -delete 2>/dev/null
    
    echo " Cleaning user cache..."
    # Clean .cache directory if it exists
    if [ -d "$HOME/.cache" ]; then
        rm -rf "$HOME/.cache"/* 2>/dev/null
        echo " User cache cleaned."
    fi
    
    echo ""
    echo " CLEANUP COMPLETED SUCCESSFULLY!"
else
    echo ""
    echo " Operation cancelled by user."
    exit 0
fi