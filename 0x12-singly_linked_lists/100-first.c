#include <stdio.h>

void print_message(void) __attribute__ ((constructor));

/**
 * print_message - Sends a string to stdout before main runs.
 *
 * Return: Nothing.
 */
void print_message(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}