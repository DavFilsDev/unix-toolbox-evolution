CC=gcc
CFLAGS=-Wall -Wextra -std=c11
SRC=src/main.c src/temp_cleaner.c src/log_cleaner.c src/disk_check.c
TARGET=auto_maintenance

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
