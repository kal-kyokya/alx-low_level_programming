#include <stdio.h>

/**
 * main - The entry point to our program.
 * @argc: Short for argument count, a integer denoting the
	  number of arguments to be found on the cmd line.
 * @argv: List of string elements found on command line.
 *
 * Return:  if program runs succesfully.
 */
int main(int argc __attribute__ ((unused)), char **argv)
{
	int count;

	count = 1;
	while (argv[count] != NULL)
	{
		printf("Element [%d] is: %s\n", count, argv[count]);
		count++;
	}
	printf("\nTotal number of arguments is: %d\n", count - 1);

	return (0);
}
