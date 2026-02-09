CC=gcc
CFLAGS=-Wall -Wextra -std=c11
SRC=src/main.c src/cpu_logger.c src/memory_logger.c src/disk_logger.c
TARGET=performance_logger

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET) performance.log