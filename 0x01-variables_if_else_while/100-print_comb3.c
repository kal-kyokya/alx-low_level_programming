#include <stdio.h>

/**
 *main - Entry point to the function.
 *
 *Return: 0 if program runs successfully.
 */
int main(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a <= 9)
	{
		while (b <= 9)
		{
			if (a == b)
				b++;
			else if (((a * 10) + b) < ((b * 10) + a))
			{
				putchar(a + '0');
				putchar(b + '0');
				if (((a == 9) && (b == 9)) || ((a == 8) && (b == 9)))
					b++;
				else
				{
					putchar(',');
					putchar(' ');
					b++;
				}
			}
			else
				b++;
		}
		b = 0;
		a++;
	}
	putchar('\n');
	return (0);
}
