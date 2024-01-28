#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Sends string input to stdout.
 * @separator: String printed in-between inputs.
 * @arg_num: The expected number of arguments.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int arg_num, ...)
{
	va_list ptr_to_arg;
	unsigned int counter;
	char *str;

	counter = 0;
	va_start(ptr_to_arg, arg_num);
	while (counter < arg_num)
	{
		str = va_arg(ptr_to_arg, char*);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (counter != (arg_num - 1) && separator != NULL)
			printf("%s", separator);
		counter++;
	}
	printf("\n");

	va_end(ptr_to_arg);
}
