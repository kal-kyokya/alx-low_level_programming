#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Send all integer inputs to stdout.
 * @separator: String to be printed in-between all input.
 * @arg_num: Number of inputs to be passed to function.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int arg_num, ...)
{
	va_list ptr_to_arg;
	unsigned int counter;
	int *array;

	array = malloc(sizeof(int) * arg_num);
	counter = 0;
	va_start(ptr_to_arg, arg_num);
	while (counter < arg_num)
	{
		if (separator == NULL)
		{
			*(array + counter) = va_arg(ptr_to_arg, int);
			printf("%d", *(array + counter));
		}
		else
		{
			if (counter > 0 && counter < arg_num)
				printf("%s", separator);
			*(array + counter) = va_arg(ptr_to_arg, int);
			printf("%d", *(array + counter));
		}
		counter++;
	}
	printf("\n");

	va_end(ptr_to_arg);
}
