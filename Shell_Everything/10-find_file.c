#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
 * main - Entry point to the function.
 * @ac: Number of function argument.
 * @argv: List of arguments.
 *
 * Return: 0 if program rums succesfully.
 */
int main(int ac, char **argv)
{
	struct stat file_stat;
	int count;

	printf("This program finds any file present in the current directory:\n\n");
	count = 1;
	if (ac < 2)
	{
		dprintf(2, "Usage: %s filename ...\n", argv[0]);
		exit(-1);
	}
	while (count < ac)
	{
		if (argv[count][0] == '/')
		{
			printf("[%d] %s:   Seems to be from a different directory.\n", count, argv[count]);
			count++;
			continue;
		}
		if (stat(argv[count], &file_stat) != -1)
			printf("[%d] %s:   Was found in this directory.\n", count, argv[count]);
		else
			printf("[%d] %s:   Was NOT FOUND in this directory.\n", count, argv[count]);

		count++;
	}

	return (0);
}
