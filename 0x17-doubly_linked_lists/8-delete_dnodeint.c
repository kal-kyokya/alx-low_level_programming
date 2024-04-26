#include "lists.h"

/**
 * delete_dnodeint_at_index - Removes the nth element inside a DLL.
 * @head: Address of the head node pointer.
 * @index: Index at which deletion occurs.
 *
 * Return: 1 if program runs successfully, -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current;

	if (head == NULL || *head == NULL)
		return (-1);
	count = 0;
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (current->next == NULL && count != index)
			return (-1);
		else if (current->next == NULL && count == index)
		{
			current->prev->next = NULL;
			current->prev = NULL;
			break;
		}
		else if (count == index)
		{
			current->next->prev = current->prev;
			current->prev->next = current->next;
			current->next = NULL;
			current->prev = NULL;
			break;
		}
		current = current->next;
		count++;
	}
	free(current);
	return (1);
}
