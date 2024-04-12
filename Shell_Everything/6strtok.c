#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

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

	if (str == NULL || str[0] == '\0')
		return (NULL);

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
			arrays = realloc(arrays, sizeof(char *) * (array_size + 1));

		arrays[wc] = malloc(sizeof(char) * (wl + 1));
		if (arrays[wc] == NULL)
		{
			dprintf(2, "Error: Couldn't allocate memory.\n");
			return (NULL);
		}
		strncpy(arrays[wc], &str[count - wl], wl);
		arrays[wc][wl] = '\0';
		wc++;
	}

	arrays = realloc(arrays, sizeof(char *) * (array_size + 1));
	arrays[wc] = NULL;

	return (arrays);
}

/**
 * main - Entry point to the function.
 *
 * Return: 0 if program successful.
 */
int main(void)
{
	const char *str;
	char **tokens;
	int i;

	str = "This is a test string";
	tokens = _strtok(str);
	if (tokens != NULL)
	{
		for (i = 0; tokens[i] != NULL; i++)
		{
			printf("%s\n", tokens[i]);
			free(tokens[i]);
		}
		free(tokens);
	}

	return (0);
}
