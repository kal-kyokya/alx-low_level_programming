#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * struct listint_s - Data structure representing a SLL.
 * @n: Integer value found inside listint_s.
 * @next: Pointer value found inside our typdef.
 *
 * Description: This typedefed data Structure is to be used
 * in this directory to facilitate creation of integer specific
 * programs using the C programming language.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);


#endif
