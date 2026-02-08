CC=gcc
CFLAGS=-Wall -Wextra -std=c11
TARGET=process_lister

all: $(TARGET)

$(TARGET): process_lister.c
	$(CC) $(CFLAGS) process_lister.c -o $(TARGET)

clean:
	rm -f $(TARGET)
