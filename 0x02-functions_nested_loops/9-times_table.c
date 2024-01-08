#include "main.h"

/**
 *times_table - Print all decimals multiplied by numbers 0 to 9.
 *
 *Return: Nothing.
 */
void times_table(void)
{
	int multpr, multpd, rslt;

	multpr = multpd = 0;
	while (multpd < 10)
	{
		while (multpr < 10)
		{
			rslt = multpd * multpr;
			_putchar(rslt + '0');
			if (multpr == 9 && multpd == 9)
				break;
			_putchar(',');
			_putchar(' ');
			multpr++;
		}
		multpr = 0;
		multpd++;
	}
}
