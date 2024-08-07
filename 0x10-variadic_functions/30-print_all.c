#include "variadic_functions.h"

/**
 * print_all - Sends a set of data type to stdout.
 * @str: String containing specifier for format to be handle.
 *
 * Return: Nothing.
 */
void print_all(const char * const str, ...)
{
	va_list ptr_to_arg;
	int count1, count2, formats;
	txf tf[] = {
		{'c', print_char}, {'i', print_int},
		{'f', print_float}, {'s', print_str}
	};

	va_start(ptr_to_arg, str);
	formats = sizeof(tf) / sizeof(tf[0]);
	count1 = 0;
	while (str[count1] != '\0')
	{
		count2 = 0;
		while (count2 < formats)
		{
			if (tf[count2].c == str[count1])
			{
				tf[count2].func(ptr_to_arg);
				if (str[count1 +1] != '\0')
				{
					_putchar(',');
					_putchar(' ');
				}
				count1++;
				continue;
			}
			count2++;
		}
		count1++;
	}
	_putchar('\n');
}
