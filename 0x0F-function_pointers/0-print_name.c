#include "function_pointers.h"

/**
 * print_name - Uses a "third party" function to display a name on screen.
 * @name1: String to be displayed.
 * @function: Function used to print string.
 *
 * Return: Nothing.
 */
void print_name(char *name1, void (*function)(char *name2))
{
	(*function)(name1);
}
