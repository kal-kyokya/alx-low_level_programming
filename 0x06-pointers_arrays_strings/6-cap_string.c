#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: String to be processed.
 *
 * Return: Pointer to new string version.
 */
char *cap_string(char *s)
{
	char *sep;
	int trigger, x1, x2;

	sep = " ,.;?(){}!\"\n\t";
	trigger = x1 = 0;
	while (s[x1] != '\0')
	{
		if (s[0] > 96 && s[0] < 123)
			s[0] -= 32;
		x2 = 0;
		while (sep[x2] != '\0')
		{
			if (sep[x2] == s[x1])
				trigger = 1;

			x2++;
		}
		if (trigger)
		{
			if (s[x1] > 96 && s[x1] < 123)
			{
				s[x1] -= 32;
				trigger = 0;
			}
			else if (s[x1] > 47 && s[x1] < 58)
				trigger = 0;
			else if (s[x1] > 64 && s[x1] < 91)
				trigger = 0;
		}

		x1++;
	}

	return (s);
}
