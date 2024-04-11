#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * main - Entry point to the function
 *
 * Return: Number of characters written by user.
 */
int main(void)
{
	int fd_in, fd_out;
	ssize_t bytes_written, bytes_read;
	char buffer[BUFFER_SIZE];

	printf("$ ");
	fd_in = STDIN_FILENO;
	fd_out = open("output_text.txt", O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_out == -1)
	{
		dprintf(2, "Error: Failed to open Output file.\n");
		return (-1);
	}
	while ((bytes_read = read(fd_in, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_out, buffer, bytes_read);
		if (bytes_read != bytes_written)
		{
			dprintf(2, "Error: Failed to write into Input file.\n");
			return (-1);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Failed to read from Input file.\n");
		return (-1);
	}

	if ((close(fd_in) == -1) || (close(fd_out) == -1))
	{
		dprintf(2, "Error: Failed to close file.\n");
		return (-1);
	}

	printf("%s\n", buffer);
	return (bytes_read);
}
