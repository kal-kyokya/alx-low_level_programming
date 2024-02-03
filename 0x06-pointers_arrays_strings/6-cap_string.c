#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: String to be processed.
 *
 * Return: Pointer to new string version.
 */
char *cap_string(char *s)
{
	char *sep1, *sep2;
	int c, x1, x2;

	sep1 = " ,.;?(){}!";
	sep2 = "\"nt";
	c = 0;
	while (s[c] != '\0')
	{
		if (s[c] > 96 && s[c] < 123)
		{
			x1 = 10;
			x2 = 4;
			while (x1 >= 0 || x2 >= 0)
			{
				x1--;
				x2--;
				if (s[c - 1] == sep1[x2])
				{
					s[c] -= 32;
					break;
				}
				else if (s[c - 2] == 92 && s[c - 1] == sep2[x2])
				{
					s[c] -= 32;
					break;
				}
			}
		}
		c++;
	}

	return (s);
}
