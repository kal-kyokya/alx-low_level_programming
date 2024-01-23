#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Return: 0 if program runs succesfully.
 */
int main(void)
{
	char *s;
	int strlen, counter;

	s = __FILE__;
	strlen = counter = 0;
	while (*(s + strlen) != '\0')
		strlen++;
	while (counter < strlen)
	{
		_putchar(*(s + counter));
		counter++;
	}
	_putchar('\n');
	return (0);
}
