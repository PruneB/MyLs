/*
** EPITECH PROJECT, 2017
** my_put_nbr_base.c
** File description:
** my put nbr base
*/

#include <unistd.h>
#include "../include/my.h"

int	my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		i++;
	}
	return (i);
}

int	my_put_nbr_base(int nb, char const *base)
{
	int baseb = my_strlen(base);

	if (nb < 0) {
		my_putchar('-');
		nb = nb * -1;
	}
	if (nb >= baseb) {
		my_put_nbr_base(nb / baseb, base);
		my_put_nbr_base(nb % baseb, base);
	}
	else
		my_putchar(base[nb]);
	return (0);
}
