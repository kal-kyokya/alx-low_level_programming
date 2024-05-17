#include "hash_tables.h"

/**
 * main - Entry point to our program.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("\nAdress of the Hash Table: %p\n\n", (void *)ht);

	printf("Sizeof of the Hash Table: %lu\n\n", sizeof(ht));

	printf("Sizeof of ht->size in Hash Table: %lu\n", sizeof(ht->size));
	printf("Value of ht->size in Hash Table: %lu\n\n", ht->size);

	printf("Sizeof of ht->array in Hash Table: %lu\n", sizeof(ht->array));
	printf("Value of ht->array in Hash Table: %p\n\n", (void *)ht->array);

	printf("Sizeof of ht->array[0] in Hash Table: %lu\n", sizeof(ht->array[0]));
	printf("Value of ht->array[0] in Hash Table: %p\n", (void *)ht->array[0]);

	return (EXIT_SUCCESS);
}
