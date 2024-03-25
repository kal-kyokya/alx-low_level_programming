#include "lists.h"

/**
 * print_listint - Sends all node values to stdout.
 * @h: Pointer to first node.
 *
 * Return: The non negative number of nodes in SLL.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node;
	size_t count;

	count = 0;
	node = h;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}

	return (count);
}
