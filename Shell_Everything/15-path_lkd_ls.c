#include "main.h"
#define TRUE 1

/**
 * path_lkd_ls - Initializes a SLL from an environ. variable.
 * @head: The head pointer to the SSL.
 *
 * Return: A pointer to the beginning of the linked list.
 */
list_t *path_lkd_ls(list_t **head)
{
	list_t *node, *helper;
	char *path, *token;

	path = getenv("PATH");
	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		dprintf(2, "Error: Failed to allocated memory for node.\n");
		return (NULL);
	}
	node->pathname = strtok(path, ":");
	node->next = NULL;
	*head = node;
	while (TRUE)
	{
		helper = node;
		node = malloc(sizeof(list_t));
		if (node == NULL)
		{
			dprintf(2, "Error: Failed to allocated memory for node.\n");
			return (NULL);
		}
		token = strtok(NULL, ":");
		if (token == NULL)
			break;
		node->pathname = token;
		node->next = NULL;
		helper->next = node;
	}

	return (*head);
}
