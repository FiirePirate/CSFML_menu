##
## EPITECH PROJECT, 2022
## Untitled (Workspace)
## File description:
## Makefile
##

SRC		=	src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	menu_csfml

CPPFLAGS	=	-l csfml-graphics -l csfml-window -l csfml-system\
				-l csfml-audio -I include

all:	$(NAME)

$(NAME):$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
