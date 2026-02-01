#!/bin/bash

# System Info Script
# Displays basic system information

echo "++++++++++++++++++++++++++++++"
echo "      SYSTEM INFORMATION      "
echo "++++++++++++++++++++++++++++++"

# Hostname
echo "Hostname: $(hostname)"

# Current user
echo "User: $(whoami)"

# Operating system
echo "OS: $(uname -o)"

# Kernel version
echo "Kernel: $(uname -r)"

# Architecture
echo "Architecture: $(uname -m)"

# Uptime
echo "Uptime:"
uptime -p

# CPU info
echo "CPU:"
lscpu | grep "Model name" | sed 's/Model name:[[:space:]]*//'

# Memory usage
echo "Memory usage:"
free -h

# Disk usage
echo "Disk usage:"
df -h /

echo "++++++++++++++++++++++++++++++"
echo "      END OF INFORMATION      "
echo "++++++++++++++++++++++++++++++"
