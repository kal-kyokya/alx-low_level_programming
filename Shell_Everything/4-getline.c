#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define SINGLE_CHAR 1

/**
 * main - Entry point to the function.
 *
 * Return: Number of characters written by user, -1 if error.
 */
int main(void)
{
	ssize_t str_in_len, bytes_read;
	char *input_buffer;
	int fdescri, buffer_size;
	char c;

	printf("$ ");

	str_in_len = 0;
	buffer_size = 64;
	fdescri = STDIN_FILENO;
	input_buffer = malloc(sizeof(char) * str_in_len);
	if (input_buffer == NULL)
	{
		dprintf(2, "Error: Couldn't allocate memory.\n");
		return (-1);
	}

	while ((bytes_read = read(fdescri, &c, SINGLE_CHAR)) > 0)
	{
		if (str_in_len == buffer_size)
		{
			buffer_size *= 2;
			input_buffer = realloc(input_buffer, buffer_size);
		}
		if (c != '\n')
		{
			input_buffer[str_in_len] = c;
			str_in_len++;
		}
		else
			break;
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Couldn't read from STDIN.\n");
		exit(98);
	}

	printf("%s\n", input_buffer);

	if (close(fdescri) == -1)
	{
		dprintf(2, "Error: Couldn't close file descriptor.\n");
		exit(100);
	}
	free(input_buffer);
	return (str_in_len);
}
