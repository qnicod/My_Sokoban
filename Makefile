##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## A Makefile, read by make command, execute all commands and rules in the Makefile
##


SRC =		main.c	\
			src/my_sokoban.c	\
			src/my_buffer_to_wordtab.c	\
			src/loop_game.c	\
			src/get_info.c	\
			src/open_read_file.c	\
			src/move_in_soko.c	\
			src/helper.c	\
			src/check_map.c	\

NAME =	my_sokoban

CFLAGS = -I./include -Wall -Wextra -L./lib -lmy -lncurses

all:
	$(MAKE) -C lib/my
	gcc -o $(NAME) $(SRC) $(CFLAGS) -g

clean:
	rm -f $(NAME)



fclean: clean
	rm -f $(NAME)
	rm -f ./lib/my/*.o
	rm -f lib/my/libmy.a
	rm -f lib/libmy.a
	rm -f lib/my/*~
	rm -f include/*~
	rm -f *~

re:	fclean all
