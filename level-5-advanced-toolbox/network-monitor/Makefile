CC=gcc
CFLAGS=-Wall -Wextra -std=c11
TARGET=network_monitor

SRC=src/main.c src/net_utils.c src/connection_list.c src/stats.c src/alert.c src/config.c

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
