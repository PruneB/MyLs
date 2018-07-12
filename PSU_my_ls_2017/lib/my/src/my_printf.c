
/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** my_printf
*/

#include <unistd.h>
#include <stdarg.h>
#include "../include/my.h"

int	my_printf(char *format, ...)
{
	int it = 0;
	va_list ap;

	va_start(ap, format);
	while (format[it] != '\0') {
		if (format[it] == '%') {
			it++;
			if (format[it] == 'd' || format[it] == 'i')
				my_put_nbr(va_arg(ap, int));
			else if (format[it] == 's')
				my_putstr(va_arg(ap, char *));
			else if (format[it] == 'c')
				my_putchar((char) va_arg(ap, int));
			else if (format[it] == 'b')
				deal_with_b(va_arg(ap, unsigned int));
			else if (format[it] == 'o')
				deal_with_o(va_arg(ap, unsigned int));
			else if (format[it] == 'x')
				deal_with_x(va_arg(ap, unsigned int));
			else if (format[it] == 'X')
				deal_with_X(va_arg(ap, unsigned int));
			else if (format[it] == 'u')
				deal_with_u(va_arg(ap, unsigned int));
			else if (format[it] == '%')
				my_putchar('%');
		} else
			my_putchar(format[it]);
		it++;
	}
	va_end(ap);
	return (0);
}
