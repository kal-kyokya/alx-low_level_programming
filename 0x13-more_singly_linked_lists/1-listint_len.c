#include "lists.h"

/**
 * listint_len - Counts the number of nodes in SLL.
 * @h: Pointer to the first node of linked list.
 *
 * Return: The number of nodes found in SLL.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node;
	size_t count;

	count = 0;
	node = h;
	while (node != NULL)
	{
		node = node->next;
		count++;
	}

	return (count);
}
