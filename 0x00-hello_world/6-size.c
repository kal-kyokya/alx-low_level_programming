#include <stdio.h>

/**
 *main - Entry point to the function
 *
 *Return: 0 if successful
 */
int main(void)
{
	printf("Size of a char: %li byte(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a float: %li byte(s)\n", sizeof(float));
	return (0);
}
