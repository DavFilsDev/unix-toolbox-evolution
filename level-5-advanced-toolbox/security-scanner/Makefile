CC=gcc
CFLAGS=-Wall -lssl -lcrypto

SRC=src/main.c src/hash_utils.c src/db_manager.c src/scanner.c src/report.c src/config.c
OUT=security_scanner

all:
	$(CC) $(SRC) -o $(OUT) $(CFLAGS)

clean:
	rm -f security_scanner
