#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define TRUE 1

/**
 * main - Entry point to the function.
 *
 * Return: 0 if program runs successfully.
 */
int main(void)
{
 	size_t bytes_read, len;
	char *args[16], *env[1], *input_str;
	int count, status;
	pid_t my_pid;

	env[0] = input_str = NULL;
	len = count = 0;
	printf("#cisfun$ ");
	bytes_read = getline(&input_str, &len, STDIN_FILENO);
	if (bytes_read <= 0)
	{
		dprintf(2, "Error: Couldn't get input line.\n");
		exit(98);
	}
	if (input_str[0] == EOF)
		return (0);
	while (TRUE)
	{
		args[count] = strtok(input_str, " ");
		if (args[count] == NULL)
			break;
		count++;
	}
	my_pid = fork();
	if (my_pid == -1)
	{
		dprintf(2, "Error: Couldn't fork calling process.\n");
		exit(98);
	}
	if (my_pid != 0)
	{
		wait(&status);
		execve("./9-shell", env, env);
	}
	else
	{
		execve(args[0], args, env);
		if ()
		  
	}

	free(input_str);
	return (0);
}
