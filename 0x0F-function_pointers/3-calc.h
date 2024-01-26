#ifndef CALC
#define CALC


/**
 * struct op - Structure of 2 members.
 * @op: String member to hold operator.
 * @f: Pointer to function for the equivalent operator.
 *
 * op - This structure provides the required sub-data types
 * needed for the proper functionning of the calc program.
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
