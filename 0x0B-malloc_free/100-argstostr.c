#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Will concatenate all cmd line arguments.
 * @ac: Number of arguments on command line.
 * @av: Argument vector.
 *
 * Return:
 */
char *argstostr(int ac, char **av)
{
	char **str;
	int strlen;

	strlen = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	if (ac == 1)
	{
		while (*(av + str) != 0)
		{
			*str = *(av + 0);
		}
	}
	
	return (str);
}
