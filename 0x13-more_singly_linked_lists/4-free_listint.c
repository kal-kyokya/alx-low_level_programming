#include "lists.h"

/**
 * free_listint - Frees malloced memory blocks.
 * @h: Pointer to the head node.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *h)
{
	listint_t *node;

	node = h;
	while (node != NULL)
	{
		free(node);
		node = node->next;
	}
}
