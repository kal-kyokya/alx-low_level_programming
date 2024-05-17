#include "hash_tables.h"

/**
 * hash_table_create - Creates a Hash Table.
 * @size: The size of the hash table's array of buckets/slots.
 *
 * Return: A pointer to the created Hash Table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *ht_array[size];
	hash_table_t *ht;

	ht = malloc(sizeof(has_table_t));
	

	return
}
