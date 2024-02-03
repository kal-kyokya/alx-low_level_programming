#include "main.h"

/**
 * leet - Swaps specific letters to integer numbers.
 * @s: String to be processed.
 *
 * Return: Pointer to new string version.
 */
char *leet(char *s)
{
	char *set1, *set2;
	int count1, count2;

	set1 = "AEOTL";
	set2 = "43071";
	count1 = 0;
	while (s[count1] != '\0')
	{
		count2 = 0;
		while (set1[count2] != '\0')
		{
			if (set1[count2] == s[count1] || (set1[count2] + 32) == s[count1])
				s[count1] = set2[count2];
			count2++;
		}
		count1++;
	}

	return (s);
}
