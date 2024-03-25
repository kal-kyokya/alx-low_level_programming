#include "lists.h"

/**
 * pop_listint - Deletes head node of Singly linked list.
 * @head: Pointer to head pointer.
 *
 * Return: The int value of popped node.
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	listint_t *helper;
	int num;

	if (head == NULL || *head == NULL)
	  return (-1);
	node = *head;
	helper = *head;
	num = node->n;
	*head = node->next;
	node->next = NULL;
	free(helper);

	return (num);
}
