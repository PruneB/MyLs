/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include "my.h"

int	main(int ac, char **av)
{
	if (ac == 1)
		basic_ls(ac, av);
	else if (ac >= 2)
		mult_ls(ac, av);
	return (0);
}
