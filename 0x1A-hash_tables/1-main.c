#include "hash_tables.h"

/**
 * main - Entry point tot he function.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	char *str;

	str = "Dj Dem";
	printf("'%s' hashed yields: %lu.\n\n", str, hash_djb2((unsigned char *)str));

	str = "Dj Mère";
	printf("'%s' hashed yields: %lu.\n\n", str, hash_djb2((unsigned char *)str));

	str = "Alliance Soeur";
	printf("'%s' hashed yields: %lu.\n\n", str, hash_djb2((unsigned char *)str));

	str = "Matutina";
	printf("'%s' hashed yields: %lu.\n\n", str, hash_djb2((unsigned char *)str));

	return (EXIT_SUCCESS);
}
