#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Uses a "third party" function to display a name on screen.
 * @name: String to be displayed.
 * @f: Function used to print string.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
}
