#include "lists.h"

/**
 * sum_dlistint - Sums all integer values of a DLL.
 * @head: Head node of the doubly linked list.
 *
 * Return: The sum of all node integer values.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
