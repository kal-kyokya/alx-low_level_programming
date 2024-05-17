#include "hash_tables.h"

int _strcmp2(char *s1, const char *s2);

/**
 * hash_table_get - Retrieves data from a Hash table.
 * @ht: Hash table to be processed.
 * @key: Key associated with an Hash table's slot.
 *
 * Return: The associated value or NULL if key can't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int index;

	if (ht == NULL || key == NULL || *(key) == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	while (ht->array[index] != NULL)
	{
		if (_strcmp2(ht->array[index]->key, key) == 0)
		{
			value = ht->array[index]->value;
			return (value);
		}
		ht->array[index] = ht->array[index]->next;
	}

	return (NULL);
}


/**
 * _strcmp2 - Compares 2 strings for likeness.
 * @s1: String 1.
 * @s2: String 2.
 *
 * Return: 0 if strings are the same.
 */
int _strcmp2(char *s1, const char *s2)
{
	int l1;

	l1 = 0;
	while (s1[l1] != '\0' || s2[l1] != '\0')
	{
		if (s1[l1] != s2[l1])
			return (s1[l1] - s2[l1]);
		l1++;
	}

	return (0);
}
