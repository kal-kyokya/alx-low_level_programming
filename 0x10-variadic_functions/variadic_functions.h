#ifndef VAR_FUNC
#define VAR_FUNC

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int arg_num, ...);
void print_strings(const char *separator, const unsigned int arg_num, ...);
void print_all(const char * const str, ...);
int _putchar(char c);
int print_char(va_list ptr_to_arg);
int print_str(va_list ptr_to_arg);
int print_int(va_list ptr_to_arg);
int print_float(va_list ptr_to_arg);
int print_num(int x);
void _printchar(va_list list);
void _printstr(va_list list);
void _printfloat(va_list list);
void _printint(va_list list);


/**
 * struct typeXfunc - Structure of elements that facilitates printing of input.
 * @c: First structure member, holds a character linked to a function.
 * @func: Second structure member, linked to a specific character.
 *
 * Description - This structure will be used by the print_all function
 * in  order to specify the format of the currently processed argument
 * passed in it.
 */
typedef struct typeXfunc
{
	char c;

	void (*func)(va_list);
} txf;

#endif
