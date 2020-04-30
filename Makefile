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
	sudo mkdir /opt/recorded-shell
	sudo $(CC) $^ -o /opt/recorded-shell/rs
	sudo ln -s /opt/recorded-shell/rs /bin/rs

uninstall:
	unlink rs
	sudo rm -f /bin/rs
	sudo rm -f /opt/recorded-shell/
