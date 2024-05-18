#include "hash_tables.h"

/**
 * hash_table_print - Prints data in order they appear in array of hash table.
 * @ht: Hash table to be printed.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	int print_flag;

	if (ht == NULL)
		return;

	index = 0;
	print_flag = 0;

	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			node = ht->array[index];

			while (node != NULL)
			{
				if (print_flag)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				print_flag = 1;
				node = node->next;
			}
		}

		index++;
	}
	printf("}\n");
}
