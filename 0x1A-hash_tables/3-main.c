#include "hash_tables.h"

#define ARRAY_SIZE 18

/**
 * main - Entry point to our program.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	char *keys[ARRAY_SIZE] = {
			  "Dj Mère",  "Dj Dem",
			  "Alliance Soeur", "Matutina",
			  "hetairas", "mentioner",
			  "heliotropes", "neurospora",
			  "depravement", "serafins",
			  "stylist", "subgenera",
			  "joyful", "synaphea",
			  "redescribed", "urites",
			  "dram", "vivency"};

	char *values[ARRAY_SIZE] = {
			  "Mère na biso", "L'homme Idéal",
			  "Alliance Soeur", "Matutina",
			  "hetairas", "mentioner",
			  "heliotropes", "neurospora",
			  "depravement", "serafins",
			  "stylist", "subgenera",
			  "joyful", "synaphea",
			  "redescribed", "urites",
			  "dram", "vivency"};
	int count;

	count = 0;
	ht = hash_table_create(1024);
	while (count < ARRAY_SIZE)
	{
		hash_table_set(ht, keys[count], values[count]);
		count++;
	}

	return (EXIT_SUCCESS);
}
