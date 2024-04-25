#include "lists.h"

/**
 * free_dlistint - Frees malloced memory blocks makind a DLL.
 * @head: Pointer to the beginning of the doubly linked list.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *helper;

	while (head != NULL)
	{
		helper = head;
		head = helper->next;
		free(helper);
	}
}
