#include <stddef.h>
#include "lists.h"
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
		if (node->str != NULL)
			printf("[%d] %s\n", node->len, node->str);
		else
			printf("[0] (nil)\n");
		node = node->next;
		count++;
	}

	return (count);
}
