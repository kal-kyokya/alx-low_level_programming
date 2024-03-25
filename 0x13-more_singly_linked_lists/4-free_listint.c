#include "lists.h"

/**
 * free_listint - Frees malloced memory blocks.
 * @head: Pointer to the head node.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	node = head;
	while (node != NULL)
	{
		free(node);
		node = node->next;
	}
}
