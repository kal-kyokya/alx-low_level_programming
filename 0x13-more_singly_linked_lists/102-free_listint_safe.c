#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the head pointer of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow_ptr;
	listint_t *fast_ptr;
	size_t count;
	int loop_detected;

	loop_detected = 0;
	count = 0;
	fast_ptr = *h;
	slow_ptr = *h;
	if (*h == NULL)
		return (0);
	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		free(*h);
		count++;
		if (slow_ptr == fast_ptr)
		{
			loop_detected = 1;
			break;
		}
		*h = slow_ptr;
	}
	while (*h != NULL)
	{
		listint_t *temp = (*h)->next;

		free(*h);
		count++;
		*h = temp;
	}
	*h = NULL;
	if (loop_detected)
		return (count - 1);
	else
		return (count);
}
