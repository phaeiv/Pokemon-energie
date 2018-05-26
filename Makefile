##
## EPITECH PROJECT, 2017
## makefile
## File description:
## c
##
CC	=	gcc

CFLAGS	=	-W -Wall -Wextra -pedantic -g3

CFLAGS	+=	-L ../.graphic_programming/lib/ -I ../.graph_programming/include/SFML/

LIB	=	-lcsfml-audio		\
		-lcsfml-graphics	\
		-lcsfml-network		\
		-lcsfml-system		\
		-lcsfml-window

NAME	=	Pokémon_energie

SRC	=	src/main.c		\
		src/get_next_line.c	\
		src/my_str_isnum.c

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKELIB)
	export LIBRARY_PATH=$LIBRARY_PATH:/home/phaeiv/.graph_programming/lib
	export LD_LIBRARY_PATH=$LIBRARY_PATH:/home/phaeiv/.graph_programming/lib
	export CPATH=$CPATH:/home/phaeiv/.graph_programming/include
	$(CC) $(OBJ) $(CFLAGS) $(LIB) -o $(NAME)

clean:	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
