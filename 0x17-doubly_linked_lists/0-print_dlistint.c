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
	const dlistint_t *temp;

	temp = h;
	num = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		num++;
	}

	return (num);
}
