#include "lists.h"

/**
 * free_listint2 - Frees malloced memory and sets head node to NULL.
 * @head: Pointer to head pointer.
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *next_node;

	node = *head;
	while (node != NULL)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
	*head = NULL;
}
