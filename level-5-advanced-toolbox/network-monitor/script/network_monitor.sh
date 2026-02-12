#!/bin/bash

LOG="$HOME/network_monitor.log"
echo "Running network monitor $(date)" >> "$LOG"
./network_monitor >> "$LOG"
echo "-----------------------------" >> "$LOG"