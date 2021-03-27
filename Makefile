##
## EPITECH PROJECT, 2020
## Projet Tek
## File description:
## Makefile
##

NAME	=	jam_story

SRC	=	src/main.c	\
		src/window.c	\
		src/music.c

RM	=	rm -f

LIB	=	-L lib/my/ -lmy

INC	=	-I include -Wall -Wextra

all:	$(NAME)

$(NAME):
	make -sC lib/my
	gcc -o $(NAME) $(SRC) $(LIB) $(INC) -l csfml-system -l csfml-audio -l csfml-graphics -l csfml-window

clean:
	make -sC lib/my clean
	$(RM) *.o
	$(RM) *~

fclean:	clean
	make -sC lib/my fclean
	$(RM) $(NAME)

re:	fclean all
