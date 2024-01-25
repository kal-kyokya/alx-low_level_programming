#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Uses a "third party" function to display a name on screen.
 * @name1: String to be displayed.
 * @function: Function used to print string.
 *
 * Return: Nothing.
 */
void print_name(char *name1, void (*function)(char *))
{
	if (name1 != NULL)
		(*function)(name1);
}
