#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of DLL.
 * @head: Address of the head ndoe.
 * @n: Integer value to be added to node.
 *
 * Return: A pointer to added node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *helper;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		dprintf(2, "Error: Failed to malloc new node.\n");
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		helper = *head;
		while (helper->next)
			helper = helper->next;
		helper->next = new_node;
		new_node->prev = helper;
	}

	return (new_node);
}
