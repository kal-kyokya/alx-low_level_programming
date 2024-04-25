#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct dlistint_s - Doubly linked list
 * @n: Integer value to be found inside node.
 * @prev: Pointer to previous node, NULL if none.
 * @next: Pointer to next node, NULL if none.
 *
 * Description: This is reference the data structure
 *              used during completion of this project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif /* LIST_H */
