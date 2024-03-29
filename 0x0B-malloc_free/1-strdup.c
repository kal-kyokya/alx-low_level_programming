#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns pointer to mem_loc where string's just been saved.
 * @str: String to be passed inside function.
 *
 * Return: Pointer to new string or NULL otherwise.
 */
char *_strdup(char *str)
{
	char *strdup;
	int strlen;

	strlen = 0;
	if (str == NULL)
		return (NULL);
	while (*(str + strlen) != '\0')
		strlen += 1;
	strdup = (char *)malloc((strlen + 1) * sizeof(char));
	if (strdup == NULL)
		return (NULL);
	while (strlen > 0)
	{
		*(strdup + (strlen - 1)) = *(str + (strlen - 1));
		strlen--;
	}

	return (strdup);
}
