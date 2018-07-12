##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile_my_ls
##

SRC	=	src/main.c		\
		src/ls_command.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -I./include

NAME	=	my_ls

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -Llib/my -lmy


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
