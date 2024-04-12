#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * main - Entry point to the function.
 *
 * Return: 0 if program runs successfully.
 */
int main(void)
{
	char *str;
	char *token;

	str = "   Hello   me   World   ! ";
	token = _strtok(str, " ");
	while (token != NULL)
	{
		printf("String token is: %s.\n", token);
		token = _strtok(str, " ");
	}

	return (0);
}
