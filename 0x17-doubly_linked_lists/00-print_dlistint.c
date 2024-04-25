#include "lists.h"

/**
 * print_dlistint - Prints all elements found inside a DLL.
 * @h: Pointer to the starting node.
 *
 * Return: The number of the elements found inside the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
