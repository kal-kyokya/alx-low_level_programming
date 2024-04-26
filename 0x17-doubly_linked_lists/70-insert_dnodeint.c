#include "lists.h"

#define TRUE 1

/**
 * insert_dnodeint_at_index - Adds a node at the nth index of a DLL.
 * @h: Address of the head node of the list.
 * @idx: Index at which insertion occurs.
 * @n: Integer value of the node to be added.
 *
 * Return: A pointer to the newly added node, NULL otherwise.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new_node, *helper;

	if (h == NULL)
		return (NULL);
	count = 0;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		dprintf(2, "Error: Failed to malloc new node.\n");
		return (NULL);
	}
	new_node->n = n;
	helper = *h;
	while (TRUE)
	{
		if (count == idx - 1)
		{
			new_node->next = (*h)->next;
			new_node->prev = (*h);
			(*h)->next->prev = new_node;
			(*h)->next = new_node;
			*h = helper;
			break;
		}
		if (idx == 0)
		{
			new_node->next = (*h);
			new_node->prev = NULL;
			(*h)->prev = new_node;
			*h = new_node;
			break;
		}
		count++;
		(*h) = (*h)->next;
		if (*h == NULL)
			return (NULL);
	}

	return (new_node);
}