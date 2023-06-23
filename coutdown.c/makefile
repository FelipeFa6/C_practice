# See LICENSE file for copyright and license details.
NAME = countdown
LOCATION = /usr/local/bin/
CC = cc
CFLAGS = -Wall -Werror -g -pedantic

SRC = main.c beep.c clock.c

OBJ = $(SRC:.c=.o)


all: $(NAME)

countdown: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

install: clean all
	mkdir -p $(LOCATION)
	cp $(NAME) $(LOCATION)

uninstall:
	rm $(LOCATION)$(NAME)

clean:
	rm -f $(OBJ) $(NAME)

