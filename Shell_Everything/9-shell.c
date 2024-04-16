#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define ARGS_NUM 16
#define ARRAY_SIZE 1024

/**
 * main - Entry point to the function.
 *
 * Return: 0 if program runs successfully.
 */
int main(void)
{
	char input_line[ARRAY_SIZE], *str_token, *args[ARGS_NUM];
	int count, status;
	char *env[] = { NULL };
	pid_t my_pid;

	fprintf(stdout, "#cisfun$ ");
	while (fgets(input_line, ARRAY_SIZE, stdin) != NULL)
	{
		count = 0;
		input_line[strcspn(input_line, "\n")] = '\0';
		str_token = strtok(input_line, " ");
		while (str_token != NULL)
		{
			args[count] = str_token;
			str_token = strtok(NULL, " ");
			if (count == ARGS_NUM - 1)
			{
				dprintf(2, "Error: Too many commands, Dafuq, MAX: 16.\n");
				exit(99);
			}
			count++;
		}
		args[count] = NULL;
		my_pid = fork();
		if (my_pid != 0)
		{
			waitpid(my_pid, &status, 0);
			fprintf(stdout, "#cisfun$ ");
		}
		else
			execve(args[0], args, env);
	}

	printf("\n");
	return (0);
}
