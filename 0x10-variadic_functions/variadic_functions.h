#ifndef VAR_FUNC
#define VAR_FUNC

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int arg_num, ...);
void print_strings(const char *separator, const unsigned int arg_num, ...);


#endif
