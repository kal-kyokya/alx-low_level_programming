#include "lists.h"

/**
 * get_dnodeint_at_index -  Returns nth node of a DLL.
 * @head: Pointer to the head node.
 * @index: Index at which retrieval occurs.
 *
 * Return: A pointer to the indexed node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current_node;

	if (head == NULL)
		return (NULL);
	count = 0;
	current_node = head;
	while (count < index)
	{
		current_node = head->next;
		if (current_node == NULL)
			return (NULL);
		count++;
		head = current_node;
	}

	return (current_node);
}
