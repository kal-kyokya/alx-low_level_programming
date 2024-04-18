#include <stddef.h>
#include "main.h"
#include <stdio.h>

/**
 * print_list - Prints value of nodes
 * @h: Pointer to the head node (Which leads to linked list).
 *
 * Return: The number of elements found inside the linked list.
 */
size_t print_list(const list_t *h)
{
	const list_t *node;
	size_t count;

	count = 0;
	node = h;
	while (node != NULL)
	{
		if (node->pathname != NULL)
			printf("%s\n", node->pathname);
		else
			printf("[0] (nil)\n");
		node = node->next;
		count++;
	}

	return (count);
}
