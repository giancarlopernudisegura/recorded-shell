# the gcc command with flags
CC = gcc -std=c99 -Wall

SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))
HEADERS = $(wildcard *.h)

EXECUTABLE = main

OS := $(shell uname)
INSTALL_LOCATION =
ifeq ($(OS), Linux)
	INSTALL_LOCATION = /usr/bin/
else ifeq ($(OS), Darwin)
	INSTALL_LOCATION = /usr/local/bin/
endif

$(EXECUTABLE): $(OBJS)
	$(CC) $^ -o $@

$(OBJS): %.o: %.c $(HEADERS)
	$(CC) -g -c $< -o $@

clean:
	rm -f *.o *.out

install: $(OBJS)
	@echo "installing..."
	@make uninstall > /dev/null 2>&1 || :
	@sudo mkdir -p /opt/recorded-shell
	sudo $(CC) $^ -o /opt/recorded-shell/rs
	sudo ln -s /opt/recorded-shell/rs $(INSTALL_LOCATION)rs
	@echo "rs installed!"

uninstall:
	@echo "uninstalling..."
	@sudo unlink $(INSTALL_LOCATION)rs
	@sudo rm -f $(INSTALL_LOCATION)rs
	@sudo rm -rf /opt/recorded-shell/
	@echo "rs uninstalled!"
