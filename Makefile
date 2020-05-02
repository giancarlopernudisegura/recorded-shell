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
	@echo "installing..."
	@make uninstall > /dev/null || :
	@sudo mkdir -p /opt/recorded-shell
	sudo $(CC) $^ -o /opt/recorded-shell/rs
	sudo ln -s /opt/recorded-shell/rs /usr/bin/rs
	@echo "rs installed!"

uninstall:
	@echo "uninstalling..."
	@sudo unlink /usr/bin/rs
	@sudo rm -f /usr/bin/rs
	@sudo rm -rf /opt/recorded-shell/
	@echo "rs uninstalled!"
