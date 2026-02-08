CC=gcc
CFLAGS=-Wall -Wextra -std=c11
TARGET=memory_monitor

all: $(TARGET)

$(TARGET): memory_monitor.c
	$(CC) $(CFLAGS) memory_monitor.c -o $(TARGET)

clean:
	rm -f $(TARGET)
