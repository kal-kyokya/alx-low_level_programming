#include "lists.h"
#include <stddef.h>

/**
 * list_len - Prints number of nodes found in linked lists.
 * @h: Pointer to the first node of linked list.
 *
 * Return: The number of nodes found in the linked list.
 */
size_t list_len(const list_t *h)
{
	const list_t *node;
	size_t count;

	count = 0;
	node = h;
	while (node != NULL)
	{
		count++;
		node = node->next;
	}

	return (count);
}
