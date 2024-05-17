#include "hash_tables.h"

/**
 * key_index - Converts a key into its corresponding index.
 * @key: Key to be hashed into an index.
 * @size: The size of the Hash Table's array.
 *
 * Return: The corresponding array slot for the key input.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
