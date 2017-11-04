CC=gcc
CFLAGS=-Wall
SRCS=$(wildcard *.c)
PROGS=$(patsubst %.c, %, $(SRCS))

all: $(PROGS)

.PHONY: clean

clean:
	rm $(PROGS)
