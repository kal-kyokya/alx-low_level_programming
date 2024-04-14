#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point to the program.
 *
 * Return: 0 if program runs successfully.
 */
int main(void)
{
	char *pgrmXargs[] = { "/bin/wc", "-m",  "7-exec.c", NULL };
	char *env[] = { NULL };

	execve(pgrmXargs[0], pgrmXargs, env);

	return (0);
}
