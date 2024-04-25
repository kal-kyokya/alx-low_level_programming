#include "lists.h"

/**
 * dlistint_len - Computes length of the DLL.
 * @h: Pointer to the begining of the list.
 *
 * Return: Number of elements found inside the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
