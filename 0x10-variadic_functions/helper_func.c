#include "variadic_functions.h"

/**
 * print_char - Sends a character variable to stdout.
 * @ptr_to_arg: Character to be printed.
 *
 * Return: 0 if all is good.
 */
int print_char(va_list ptr_to_arg)
{
	int c;

	c = va_arg(ptr_to_arg, int);
	_putchar(c);
	return (0);
}

/**
 * print_str - Sends a string input to stdout.
 * @ptr_to_arg: Pointer to string argument to be printed.
 *
 * Return: 0 If all is good.
 */
int print_str(va_list ptr_to_arg)
{
	char *str;
	int len;

	len = 0;
	str = va_arg(ptr_to_arg, char *);
	if (str == NULL)
		str = "NULL";
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	return (0);
}

/**
 * print_num - Prints an integer using _putchar.
 * @x: Input number.
 *
 * Return: 0 if program runs successfully.
 */
int print_num(int x)
{
	int rest;

	if (x < 10)
	{
		_putchar(x + '0');
		return (0);
	}
	else
	{
		rest = x % 10;
		print_num(x / 10);
		_putchar(rest);
	}

	return (0);
}

/**
 * print_int - Sends an integer variable to stdout.
 * @ptr_to_arg: Pointer to int argument to be printed.
 *
 * Return: 0 if program runs successfully.
 */
int print_int(va_list ptr_to_arg)
{
	int c;
	int remainder;

	c = va_arg(ptr_to_arg, int);
	if (c < 0)
	{
		_putchar('-');
		c = c * (-1);
	}
	if (c / 10 < 10)
	{
		remainder = c % 10;
		c /= 10;
		if (c != 0)
			_putchar(c + '0');
		_putchar(remainder + '0');
		return (0);
	}
	else
	{
		print_num(c);
	}

	return (0);
}

/**
 * print_float - Sends a float variable to stdout.
 * @ptr_to_arg: float to be printed.
 *
 * Return: Nothing.
 */
int print_float(va_list ptr_to_arg)
{
	int c;

	c = va_arg(ptr_to_arg, int);
	printf("%d", c);

	return (0);
}
