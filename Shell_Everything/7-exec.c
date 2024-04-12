#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point to the function.
 *
 * Return: 0 if program runs successfully.
 */
int main(void)
{
	char *exec_args[] = { "/bin/cat", "main.h", NULL };
	char  *env_args[] = { NULL };

	execve(exec_args[0], exec_args, env_args);

	return (0);
}
