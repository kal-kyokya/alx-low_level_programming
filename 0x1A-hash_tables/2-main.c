#include "hash_tables.h"

/**
 * main - Entry point tot he function.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	char *str;
	unsigned long int size;

	size = 1024;
	str = "Dj Dem";
	printf("'%s' at index %lu.\n\n", str, key_index((unsigned char *)str, size));

	str = "Dj Mère";
	printf("'%s' at index %lu.\n\n", str, key_index((unsigned char *)str, size));

	str = "Alliance Soeur";
	printf("'%s' at index %lu.\n\n", str, key_index((unsigned char *)str, size));

	str = "Matutina";
	printf("'%s' at index %lu.\n\n", str, key_index((unsigned char *)str, size));

	return (EXIT_SUCCESS);
}
