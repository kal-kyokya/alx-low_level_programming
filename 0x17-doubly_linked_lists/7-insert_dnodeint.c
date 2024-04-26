#include "lists.h"

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
	dlistint_t *newNode, *current;
	unsigned int i;

	i = 0;
	if (idx == 0)
		return (add_dnodeint(h, n));
	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (*h == NULL && idx != 0)
	{
		free(newNode);
		return (NULL);
	}
	current = *h;
	while (i < idx - 1 && current->next != NULL)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->prev = current;
	newNode->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = newNode;
	}
	current->next = newNode;

	return (newNode);
}
