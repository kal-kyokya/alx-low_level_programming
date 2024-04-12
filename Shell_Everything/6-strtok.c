#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#define TRUE 1

/**
 * _strtok - Generate a word token from a string.
 * @str: The string literal.
 * @del: The string delimiter.
 *
 * Return: A pointer to the array.
 */
char *_strtok(char *str, const char *del)
{
	char *token;
	static int count;
	int wl;

	token = NULL;
	while (*(str + count) != '\0')
	{
		wl = 1;
		if (str[count] == *del)
		{
			count++;
			continue;
		}
		while (TRUE)
		{
			wl++;
			token = realloc(token, wl);
			if (token == NULL)
			{
				dprintf(2, "Error: Failed to reallocate memory.\n");
				return (NULL);
			}
			token[wl - 2] = str[count];
			count++;
			if (str[count] == *del || str[count] == '\0')
			{
				token[wl - 1] = '\0';
				count++;
				return (token);
			}
		}
	}
	count++;

	return (token);
}
