#include "hash_tables.h"

/**
 * hash_table_create - Creates a Hash Table.
 * @size: The size of the hash table's array of buckets/slots.
 *
 * Return: A pointer to the created Hash Table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int index;

	index = 0;
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	while (index < size)
	{
		ht->array[index] = NULL;
		index++;
	}

	return (ht);
}
