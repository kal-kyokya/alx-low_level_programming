#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of a SLL.
 * @h: Pointer to the header node.
 * @num: Number to be added as int value of node.
 *
 * Return: The address of the new node.
 */
listint_t *add_nodeint(listint_t **h, const int num)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = num;
	node->next = *h;
	*h = node;

	return (node);
}
