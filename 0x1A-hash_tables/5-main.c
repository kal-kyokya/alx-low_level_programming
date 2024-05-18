#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

#define ARRAY_SIZE 1024

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	unsigned long int index;

	ht = hash_table_create(ARRAY_SIZE);

	hash_table_print(ht);

	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Street");

	hash_table_print(ht);

	index = key_index((const unsigned char *)"c", ARRAY_SIZE);
	printf("\nc: --%lu--", index);
	index = key_index((const unsigned char *)"python", ARRAY_SIZE);
	printf("\npython: --%lu--", index);
	index = key_index((const unsigned char *)"Bob", ARRAY_SIZE);
	printf("\nBob: --%lu--", index);
	index = key_index((const unsigned char *)"N", ARRAY_SIZE);
	printf("\nN--%lu--", index);
	index = key_index((const unsigned char *)"Asterix", ARRAY_SIZE);
	printf("\nAsterix: --%lu--", index);
	index = key_index((const unsigned char *)"Betty", ARRAY_SIZE);
	printf("\nBetty: --%lu--", index);
	index = key_index((const unsigned char *)"98", ARRAY_SIZE);
	printf("\n98: --%lu--\n", index);

	return (EXIT_SUCCESS);
}
