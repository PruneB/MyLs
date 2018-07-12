/*
** EPITECH PROJECT, 2017
** deal_with_base.c
** File description:
** flag with base
*/

#include <unistd.h>
#include "../include/my.h"

void	deal_with_b(int nb)
{
	my_put_nbr_base(nb, "01");
}

void	deal_with_o(int nb)
{
	my_put_nbr_base(nb, "01234567");
}

void	deal_with_x(int nb)
{
	my_put_nbr_base(nb, "0123456789abcdef");
}

void	deal_with_X(int nb)
{
	my_put_nbr_base(nb, "0123456789ABCDEF");
}

void	deal_with_u(int nb)
{
	if (nb < 0) {
		nb = nb + 4294967296;
		my_put_nbr_u(nb);
	} else {
		my_put_nbr_u(nb);
	}
}
