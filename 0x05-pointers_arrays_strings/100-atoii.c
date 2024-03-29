#include "main.h"

/**
 * _atoi - Converts first encountered number inside string to type int.
 * @s: String to be assessed.
 *
 * Return: An integer.
 */
int _atoi(char *s)
{
	int len, count1, count2, result;

	len = count1 = count2 = 0;
	while (s[len] != '\0')
		len++;
	if (len == 0)
		return (0);
	while (count1 < len)
	{
		if (s[count1] >= '0' && s[count1] <= '9')
		{
			result = (s[count1] - '0');
			count1++;
			while (s[count1] >= '0' && s[count1] <= '9')
			{
				result = (result * 10) + (s[count1 + 1] - '0');
				count1++;
			}
			break;
		}
		else if (count1 == (len - 1))
			result = 0;
		count1++;
	}
	while (count2 < len)
	{
		if (s[count2] == '-')
			result *= (-1);
		else if (s[count2] >= '0' && s[count2] <= '9')
			break;
		count2++;
	}

	return (result);
}
