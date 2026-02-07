CC=gcc
CFLAGS=-Wall -Wextra -std=c11
TARGET=file_analyzer

all: $(TARGET)

$(TARGET): file_analyzer.c
	$(CC) $(CFLAGS) file_analyzer.c -o $(TARGET)

clean:
	rm -f $(TARGET)
