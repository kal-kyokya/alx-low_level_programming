#include "hash_tables.h"

/**
 * hash_table_create - Creates a Hash Table.
 * @size: The size of the hash table's array of buckets/slots.
 *
 * Return: A pointer to the created Hash Table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **ht_array;
	hash_table_t *ht;

	ht_array = malloc(sizeof(hash_node_t) * size);
	ht = malloc(sizeof(hash_table_t));
	ht->size = size;
	ht->array = ht_array;

	return (ht);
}
