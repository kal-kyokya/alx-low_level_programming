#include "lists.h"

/**
 * add_note - Set a node as header in linked list.
 * @head: Pointer to the first linked list node.
 * @s: String value of added node.
 *
 * Return: A pointer to the first node.
 */
list_t *add_node(list_t **head, const char *s)
{
	list_t *node;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(EXIT_FAILURE);
	}
	node->len = strlen(s);
	node->str = strdup(s);
	node->next = *head;
	*head = node;
	printf("[%d] %s\n", node->len, node->str);

	return (*head);
}
