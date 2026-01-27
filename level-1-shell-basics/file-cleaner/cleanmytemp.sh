#!/bin/bash
# cleanmytemp.sh - Basic file cleaner
# Level 1 - Project 1
# 
# Description: Cleans temporary files from /tmp and user cache
# Usage: ./cleanmytemp.sh [--help]
# Options:
#   --help    Show this help message
#   --dry-run Show what would be deleted without actually deleting

# Check for help option
if [ "$1" = "--help" ] || [ "$1" = "-h" ]; then
    echo "Usage: $0 [OPTION]"
    echo "Clean temporary files from /tmp and user cache."
    echo ""
    echo "Options:"
    echo "  -h, --help     Show this help message"
    echo "  --dry-run      Show what would be deleted"
    echo ""
    echo "Examples:"
    echo "  $0             # Run normal cleanup"
    echo "  $0 --dry-run   # Preview files to delete"
    exit 0
fi

# Check for dry-run option
if [ "$1" = "--dry-run" ]; then
    echo "================================="
    echo "     DRY RUN - PREVIEW ONLY"
    echo "================================="
    echo ""
    echo " Files that would be deleted from /tmp:"
    find /tmp -type f -mtime +7 2>/dev/null | head -10
    echo "... and more"
    echo ""
    echo " Cache that would be cleaned:"
    if [ -d "$HOME/.cache" ]; then
        ls "$HOME/.cache" | head -5
        echo "... and more"
    fi
    echo ""
    echo "ℹ  No files were actually deleted."
    exit 0
fi

echo "================================="
echo "     SIMPLE FILE CLEANER"
echo "================================="
echo ""

# Show current disk usage before cleaning
echo " Current disk usage in /tmp:"
du -sh /tmp 2>/dev/null || echo "⚠️  Cannot check /tmp usage"
echo ""

# Ask user for confirmation (safety measure)
read -p " Clean temporary files? (y/n): " user_answer

# Check user response (accept both lowercase and uppercase Y)
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
    # Check if cache directory exists before cleaning
    if [ -d "$HOME/.cache" ]; then
        # rm -rf: remove recursively and forcefully
        rm -rf "$HOME/.cache"/* 2>/dev/null
        echo " User cache cleaned."
    else
        echo "ℹ  No cache directory found at $HOME/.cache"
    fi
    
    echo ""
    echo "================================="
    echo " CLEANUP COMPLETED SUCCESSFULLY!"
    echo "================================="
else
    echo ""
    echo " Operation cancelled by user."
    exit 0
fi

# Exit with success code
exit 0