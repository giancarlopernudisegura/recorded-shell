# the gcc command with flags
CC = gcc -std=c99 -Wall

SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))
HEADERS = $(wildcard *.h)

EXECUTABLE = main

$(EXECUTABLE): $(OBJS)
	$(CC) $^ -o $@

$(OBJS): %.o: %.c $(HEADERS)
	$(CC) -g -c $< -o $@

clean:
	rm -f *.o *.out

install: $(OBJS)
	sudo $(CC) $^ -o /bin/rs

uninstall:
	sudo rm -f /bin/rs
