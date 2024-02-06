#include "main.h"

/**
 * set_string - Sets memory region holding a string literal to another.
 * @s: Pointer to targeted memory.
 * @to: String to be copied.
 *
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
