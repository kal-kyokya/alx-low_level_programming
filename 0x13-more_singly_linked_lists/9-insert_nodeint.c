#include "lists.h"

/**
 * insert_nodeint_at_index - Adds a node at position idx.
 * @head: Pointer to the head pointer.
 * @idx: The ordinal value locating the new node.
 * @num: The int value of the new node.
 *
 * Return: A pointer to the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int num)
{
	listint_t *node;
	listint_t *new_node;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (NULL);
	node = *head;
	count = 0;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = num;
	if (idx == 0)
	{
		new_node = node;
		*head = new_node;
		return (new_node);
	}
	while (count != idx - 1)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
		count++;
	}
	new_node->next = node->next;
	node->next = new_node;

	return (new_node);
}
