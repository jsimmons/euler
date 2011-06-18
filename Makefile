CFLAGS=-g -O0 -Wall -Wextra -pedantic -std=c99
LIBS=-lm

SOURCES=$(wildcard *.c)
BINS=$(patsubst %.c,%,${SOURCES})

all: ${BINS}

clean:
	rm -f ${BINS}

$(BINS): %: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)
