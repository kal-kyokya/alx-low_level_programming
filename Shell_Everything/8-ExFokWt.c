#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * main - Entry point to the function.
 *
 * Return: 0 if program runs successfully.
 */
int main(void)
{
	pid_t my_pid;
	int count;
	char *args[] = { "/bin/ls", "-l", "/tmp", NULL };
	char *env[] = { NULL };
	int status;

	count = 0;
	while (count < 5)
	{
		my_pid = fork();
		if (my_pid == -1)
		{
			dprintf(2, "Error: Failed to fork calling process.\n");
			exit(1);
		}
		if (my_pid != 0)
			wait(&status);
		else
			execve(args[0], args, env);
		count++;
	}

	return (0);
}
