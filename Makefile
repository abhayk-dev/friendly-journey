
CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic

SOURCES = $(wildcard *.c)
PROGRAMS = $(SOURCES:.c=)

.PHONY: all clean list

all: $(PROGRAMS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

list:
	@echo "Available C programs:"
	@printf '%s\n' $(PROGRAMS)

clean:
	rm -f $(PROGRAMS)
