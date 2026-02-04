#!/bin/bash

# Process Watcher Script
# Monitors a running process by name

PROCESS_NAME="$1"
INTERVAL=3

if [[ -z "$PROCESS_NAME" ]]; then
    echo "Usage: ./process-watcher.sh <process-name>"
    exit 1
fi

echo "       PROCESS WATCHER        "
echo "Monitoring process: $PROCESS_NAME"
echo "Refresh interval: ${INTERVAL}s"
echo "Press Ctrl+C to stop"
echo "------------------------------"

while true; do
    PID=$(pgrep -x "$PROCESS_NAME")

    if [[ -z "$PID" ]]; then
        echo "[$(date +"%H:%M:%S")] Process '$PROCESS_NAME' is NOT running "
        break
    else
        ps -p "$PID" -o pid,comm,%cpu,%mem --no-headers
        echo "------------------------------"
    fi

    sleep "$INTERVAL"
done
