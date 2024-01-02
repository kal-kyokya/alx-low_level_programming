#include <stdio.h>

/**
 *main - Entry point to the program.
 *
 *Return: 0 if program runs successfully.
 */
int main(void)
{
	char m;
	char n;

	m = 'a';
	n = 'A';
	while (m <= 'z')
	{
		putchar(m);
		m++;
	}
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
