#include "main.h"

/**
 * binary_to_uint - Converts a binary value into a decimal one.
 * @b: Pointer to the string containing the binary value.
 *
 * Return: The equivalent decimal value.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int count;

	count = 0;
	result = 0;
	if (b == NULL)
		return (0);
	while (b[count] != '\0')
	{
		if (b[count] != 48 && b[count] != 49)
			return (0);
		result = result | (b[count] - '0');
		if (b[count + 1] != '\0')
			result = result << 1ul;
		count++;
	}

	return (result);
}
