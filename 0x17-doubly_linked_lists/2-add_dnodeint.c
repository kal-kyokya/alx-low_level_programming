#include "lists.h"

/**
 * add_dnodeint - Adds a node a the beginning of a DLL.
 * @head: Pointer to the head node.
 * @n: Value to be added in new node.
 *
 * Return: A pointer to the added node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
