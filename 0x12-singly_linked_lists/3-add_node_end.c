#include "lists.h"

/**
 * add_node_end - Adds a node at the end of a linked list.
 * @h: Pointer allowed access to out of scope pointer head.
 * @str: String to be passed as value in added node.
 *
 * Return: A pointer to the first linked list node.
 */
list_t *add_node_end(list_t **h, const char *str)
{
	list_t *node, *helper;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
		free(node->str);
	node->len = strlen(str);
	node->next = NULL;
	if (*h == NULL)
		*h = node;
	else
	{
		helper = *h;
		while (helper->next != NULL)
			helper = helper->next;
		helper->next = node;
	}

	return (*h);
}
