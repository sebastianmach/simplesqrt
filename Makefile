CFLAGS = -Wall -std=c99 -g
CC     = gcc
BINARY = simplesqrt

all: main.c
	$(CC) $(CFLAGS) -o $(BINARY) $^

.PHONY: clean
clean:
	rm -f $(BINARY)
