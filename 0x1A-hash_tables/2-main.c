#include "hash_tables.h"

/**
 * main - Entry point tot he function.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	char *str;
	unsigned long int ht_array_size;

	ht_array_size = 1024;
	str = "Dj Dem";
	printf("'%s' at index %lu.\n\n", str, key_index((unsigned char *)str, ht_array_size));

	str = "Dj Mère";
	printf("'%s' at index %lu.\n\n", str, key_index((unsigned char *)str, ht_array_size));

	str = "Alliance Soeur";
	printf("'%s' at index %lu.\n\n", str, key_index((unsigned char *)str, ht_array_size));

	str = "Matutina";
	printf("'%s' at index %lu.\n\n", str, key_index((unsigned char *)str, ht_array_size));

	return (EXIT_SUCCESS);
}
