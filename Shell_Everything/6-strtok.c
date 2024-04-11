#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

char **_strtok(const char *str);

/**
 * main - Entry point to the function.
 *
 * Return: 0 if program runs successfully.
 */
int main(void)
{
	char *str;
	char **arrays;
	int count;

	count = 0;
	str = "   Hello   World   ! ";
	arrays = _strtok(str);
	while (arrays[count] != NULL)
	{
		printf("String %d is: %s.\n", count + 1, arrays[count]);
		count++;
	}

	return (0);
}

/**
 * _strtok - Splits each word of a string into arrays.
 * @str: A string literal.
 *
 * Return: A pointer to the array.
 */
char **_strtok(const char *str)
{
	char **arrays;
	int wc, wl, count, array_size;

	array_size = 1;
	arrays = malloc(sizeof(char *) * array_size);
	count = wc = 0;
	while (str[count] != '\0')
	{
		wl = 0;
		if (str[count] == ' ')
		{
			count++;
			continue;
		}
		while (str[count] != ' ' && str[count] != '\0')
		{
			wl++;
			count++;
		}
		if (wc > 0 && wl > 0)
			arrays = realloc(arrays, ++array_size);
		arrays[wc] = malloc(sizeof(char) * wl);
		if (arrays[wc] == NULL)
		{
			dprintf(2, "Error: Couldn't allocate memory.\n");
			return (NULL);
		}
		wc++;
	}

	return (arrays);
}
