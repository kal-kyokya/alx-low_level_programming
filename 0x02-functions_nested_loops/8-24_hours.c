#include "main.h"

/**
 *jack_bauer - Prints every minute of the day fromm 00:00 to 23:59.
 *
 *Return: Nothing.
 */
void jack_bauer(void)
{
	int hr1, hr2, min1, min2;

	hr1 = hr2 = min1 = min2 = 0;
	while (hr1 < 3)
	{
		while (hr2 < 10)
		{
			while (min1 < 6)
			{
				while (min2 < 10)
				{
					_putchar(hr1 + '0');
					_putchar(hr2 + '0');
					_putchar(':');
					_putchar(min1 + '0');
					_putchar(min2 + '0');
					_putchar('\n');
					min2++;
				}
				min2 = 0;
				min1++;
			}
			min1 = 0;
			if (hr1 == 2 && hr2 == 3)
				break;
			hr2++;
		}
		hr2 = 0;
		hr1++;
	}
}
