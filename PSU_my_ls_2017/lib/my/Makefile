##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	src/deal_with_base.c	\
		src/deal_with_c_s_d.c	\
		src/my_printf.c		\
		src/my_put_nbr_base.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		rm -f $(OBJ)

fclean:
		rm -f $(NAME)

clean:		fclean

re:		fclean all
