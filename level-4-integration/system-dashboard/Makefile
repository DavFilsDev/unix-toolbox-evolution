CC=gcc
CFLAGS=-Wall -Wextra -std=c11
SRC=src/main.c src/cpu.c src/memory.c src/disk.c
TARGET=system_dashboard

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
