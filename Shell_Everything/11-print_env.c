#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to the function.
 *
 * Return: 0 if program runs successfully.
 */
int main(void)
{
	int count;

	count = 0;
	while (environ[count] != NULL)
	{
		printf("%s\n", environ[count]);
		count++;
	}

	return (0);
}
