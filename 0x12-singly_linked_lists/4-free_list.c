#include "lists.h"

/**
 * free_list - Permits allocation of previously restricted memory blocks.
 * @h: Pointer to the very first linked list node.
 *
 * Return: Nothing.
 */
void free_list(list_t *h)
{
	list_t *node;

	node = h;
	while (node != NULL)
	{
		free(node);
		node = node->next;
	}
}
