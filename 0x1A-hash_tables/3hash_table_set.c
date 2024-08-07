#include "hash_tables.h"

int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
int _strcmp(char *s1, char *s2);

/**
 * hash_table_set - Inserts data into a Hash table.
 * @ht: Hash table to be processed.
 * @key: Key associated with an Hash table's slot.
 * @value: Data associated with the input key.
 *
 * Return: 1 if success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	char *key_copy, *value_copy;

	if (ht  == NULL || key == NULL ||  *(key) == '\0' || value  == NULL)
		return (0);
	key_copy = malloc(_strlen(key));
	if (key_copy == NULL)
		return (0);
	value_copy = malloc(_strlen(value));
	if (value_copy == NULL)
	{
		free(key_copy);
		return (0);
	}

	_strcpy(key_copy, key);
	_strcpy(value_copy, value);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(key_copy);
		free(value_copy);
		return (0);
	}

	node->key = key_copy;
	node->value = value_copy;
	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else if (strcmp(ht->array[index]->key, key_copy) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = value_copy;
		free(node);
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}

/**
 * _strcpy - Copies on string inside another.
 * @dest: Pointer to the copy of string.
 * @src: Pointer to strings to be copied.
 *
 * Return: Pointer to the copy of string.
 */
char *_strcpy(char *dest, const char *src)
{
	char *str;
	int count1, count2;

	str = dest;
	count1 = count2 = 0;
	while (src[count1] != '\0')
		count1++;
	while (count2 <= count1)
	{
		str[count2] = src[count2];
		count2++;
	}

	return (str);
}

/**
 * _strlen - Determines the length of a string.
 * @s: String to pass in function.
 *
 * Return: Length of string.
 */
int _strlen(const char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
		length++;

	return (length);
}

/**
 * _strcmp - Compares 2 strings for likeness.
 * @s1: String 1.
 * @s2: String 2.
 *
 * Return: 0 if strings are the same.
 */
int _strcmp(char *s1, char *s2)
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
