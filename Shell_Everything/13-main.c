#include "main.h"

/**
 * main - Entry point to the function.
 * @ac: The number of function argument
 * @argv: The list of actual arguments.
 *
 * Return: 0 if program runs successfully.
 */
int main(int ac, char **argv)
{
	char *value;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s environment_variable_name\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	value = _getenv(argv[1]);
	if (value != NULL)
		printf("Using _getenv(): The value of the %s variable is: %s\n\n", argv[1], value);
	else
		printf("Our environment variable is yet to be set.\n\n");
	value = getenv(argv[1]);
	if (value != NULL)
		printf("Using getenv(): The value of the %s variable is: %s\n\n", argv[1], value);
	else
		printf("Our environment variable is yet to be set.\n\n");

	return (0);
}
