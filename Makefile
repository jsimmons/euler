CFLAGS=-g -O2 -Wall -Wextra -Werror -std=c99
LIBS=-lm

SOURCES=$(wildcard *.c)
TARGETS=$(patsubst %.c,%,${SOURCES})

all: ${TARGETS}

$(TARGETS): %: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

clean:
	rm -f ${TARGETS}

.PHONY: all clean
