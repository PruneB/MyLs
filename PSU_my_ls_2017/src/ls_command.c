/*
** EPITECH PROJECT, 2017
** ls_command.c
** File description:
** ls_command
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include "my.h"

void	info(struct dirent *entry)
{
	if (entry->d_name[0] != '.') {
		my_printf("%s\n", entry->d_name);
	}
}

int	basic_ls(int ac, char **av)
{
	DIR *dir;
	struct dirent *entry;

	dir = opendir("./");
	entry = readdir(dir);

	if (ac == 1) {
		while (entry != NULL) {
			info(entry);
			entry = readdir(dir);
		}
	}
	closedir(dir);
	return (0);
}

int	 mult_ls(int ac, char **av)
{
	int i = 1;
	DIR *dir;
	struct dirent *entry;

	while (av[i] != NULL) {
		dir = opendir(av[i]);
		entry = readdir(dir);
		if (ac >= 2 && av[i][0] != '-') {
			my_printf("%s:\n", av[i]);
			while (entry != NULL) {
				info(entry);
				entry = readdir(dir);
			}
		}
		i++;
		closedir(dir);
	}
	return (0);
}
