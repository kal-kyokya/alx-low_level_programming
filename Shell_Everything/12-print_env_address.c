#include "main.h"

/**
 * main - Entry point to the function.
 * @ac: Number of function arguments.
 * @argv: List of actual arguments
 * @env: List of environment variables.
 *       These [variables] are the pieces of information requiered
 *       by systems calls, kernel,... and all under the hood
 *       processes involved in the program's execution
 *
 * Return: 0 if program runs successfully.
 */
int main(int ac __attribute__ ((unused)), char **argv __attribute__ ((unused)), char **env)
{
	printf("The address of 'env' is [%p]\n", (void*)&env);
	printf("The address of 'environ' is [%p]\n", (void *)&environ);

	printf("\nThe address of 'environ[0]' is [%p]\n", environ[0]);
	printf("The address of	'*environ' is [%p]\n", *environ);
	printf("The address of	'*env' is [%p]\n", *env);

	return (0);
}
