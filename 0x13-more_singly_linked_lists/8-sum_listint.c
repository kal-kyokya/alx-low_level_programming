#include "lists.h"

/**
 * sum_listint - Adds all int values in a SLL.
 * @head: Pointer to the head node.
 *
 * Return: The sum of all node's int values.
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
