#include "main.h"

/**
 * main - Entry point to the function.
 *
 * Return: 0 if program runs successfully.
 */
int main(void)
{
	char *path;
	char *token;

	path = getenv("PATH");
	token = strtok(path, ":");
	while (token)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
	}

	return (0);
}
