#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to the function.
 * @argc: Number of arguments on the cmd line.
 * @argv: Array of string names from cmd line.
 *
 * Return: 0 if program runs successfully.
 */
int main(int argc __attribute__ ((unused)), char **argv)
{
	printf("%s\n", *(argv + 0));
	return (0);
}
