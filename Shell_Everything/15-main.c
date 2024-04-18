#include "main.h"
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  list_t *head;

  head = path_lkd_ls(&head);
  print_list(head);

  free(head);
  return (0);
}
