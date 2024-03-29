#include "lists.h"

/**
 * delete_nodeint_at_index - Removes a particular node at index n.
 * @head: Pointer to the head pointer.
 * @index: Position at which deletion occurs.
 *
 * Return: 1 if programs runs successfully, -1 if not.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *helper;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);
	count = 0;
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		node->next = NULL;
		free(node);
		return (1);
	}
	while (count != index)
	{
		helper = node->next;
		if (count == index - 1)
			break;
		else if (helper == NULL)
			return (-1);
		node = node->next;
		count++;
	}
	node->next = helper->next;
	helper->next = NULL;
	free(helper);

	return (1);
}
