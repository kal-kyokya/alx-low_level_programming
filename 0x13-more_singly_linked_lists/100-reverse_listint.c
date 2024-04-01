#include "lists.h"

/**
 * reverse_listint - Reverses the order of a listint_t linked list.
 * @head: Pointer to the head pointer of the list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}

	*head = prev;

	return (prev);
}
