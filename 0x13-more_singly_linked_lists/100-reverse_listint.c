#include "lists.h"

/**
 * reverse_listint - Reverses the order of all node inside a list.
 * @head: Pointer to the head pointer of SLL.
 *
 * Return: A pointer to the reversed list's first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node;
	listint_t *helper;

	if (head == NULL || *head == NULL)
		return (NULL);
	node = *head;
	helper = NULL;
	while (*head != NULL)
	{
		*head = node->next;
		node->next = helper;
		(*head)->next = node;
		helper = (*head)->next;
		node = node->next;
	}

	return (node);
}
