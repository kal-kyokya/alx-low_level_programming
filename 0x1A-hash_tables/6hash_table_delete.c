#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the entirety of a hash table.
 * @ht: The hash table to be processed.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *next_node;
	unsigned long int index;

	index = 0;

	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			node = ht->array[index];

			while (node != NULL)
			{
				next_node = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = next_node;
			}
		}

		index++;
	}

	free(ht->array);
	free(ht);
}
