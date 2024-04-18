#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	size_t elements;

	head = path_lkd_ls(&head);
	elements = print_list(head);
	printf("\nThere are %ld elements in the linked list.\n", elements);

	free(head);
	return (0);
}
