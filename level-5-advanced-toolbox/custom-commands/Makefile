CC=gcc
CFLAGS=-Wall -Wextra -std=c11
TARGET=customcmd

SRC=src/main.c src/utils.c src/cmd_ls.c src/cmd_cat.c src/cmd_grep.c src/cmd_sysinfo.c

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
