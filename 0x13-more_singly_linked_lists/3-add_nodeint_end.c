#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a SLL.
 * @h: Pointer to the header node of the SLL.
 * @num: Number to be added as int value of node.
 *
 * Return: The address of the new node.
 */
listint_t *add_nodeint_end(listint_t **h, const int num)
{
	listint_t *node;
	listint_t *helper;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = num;
	node->next = NULL;
	helper = *h;
	if (helper == NULL)
		*h = node;
	else
	{
		while (helper->next != NULL)
			helper = helper->next;
		helper->next = node;
	}

	return (node);
}
