/*
** EPITECH PROJECT, 2017
** l_command.c
** File description:
** l_command
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <time.h>
#include <grp.h>
#include <pwd.h>
//#include "my.h"

int	l_command()
{
	struct stat sb;
	struct group gp;
	struct passwd pwd;
	struct dirent *entry;
	DIR *dir;

	stat("./Makefile", &sb);
	dir = opendir("./");
	entry = readdir(dir);

	printf("%i ", S_IFMT);
	/*printf("%i ", sb.st_nlink);
	printf("%s ", &pwd.pw_name);
	printf("%s " , &gp.gr_name);
	printf("%i ", sb.st_size);
	printf("%s %s ", ctime(&sb.st_mtime), entry->d_name);*/

	return (0);
}

/*int	main()
{
	l_command();

	return (0);
	       
	}*/
