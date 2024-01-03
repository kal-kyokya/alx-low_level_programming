#include <stdio.h>

/**
 *main - Entry point to the program.
 *
 *Return: 0 if program runs successfully.
 */
int main(void)
{
	int x;

	x = 0;
	while (x <= 9)
	{
		putchar(x + '0');
		if (x == 9)
		{
			x++;
		}
		else
		{
			putchar(',');
			putchar(' ');
			x++;
		}
	}
	putchar('\n');
	return (0);
}
