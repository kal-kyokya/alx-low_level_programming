#include "lists.h"

/**
 * get_nodeint_at_index - Locates a node given its index value.
 * @head: Pointer to the head pointer.
 * @index: Ordinal value locating a specific elementwithin the struc.
 *
 * Return: A pointer to the node at index n.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	count = 0;
	node = head;
	while (count != index)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
		count++;
	}

	return (node);
}
