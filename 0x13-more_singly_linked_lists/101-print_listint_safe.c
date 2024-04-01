#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr = head;
	const listint_t *fast_ptr = head;
	size_t count = 0;
	int loop_detected = 0;

	if (head == NULL)
		return (0);

	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		count++;

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			loop_detected = 1;
			break;
		}
	}

	if (loop_detected)
	{
		printf("Loop detected\n");
		exit(98);
	}

	while (slow_ptr != NULL)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		count++;
		slow_ptr = slow_ptr->next;
	}

	return (count);
}
