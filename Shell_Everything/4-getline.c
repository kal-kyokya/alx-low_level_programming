#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * main - Entry point to the function.
 *
 * Return: Number of characters written by user.
 */
int main(void)
{
	int fd_in;
	ssize_t bytes_read;
	char buffer[BUFFER_SIZE];

	printf("$ ");
	fd_in = STDIN_FILENO;
	bytes_read = read(fd_in, buffer, BUFFER_SIZE);
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Reading from file.\n");
		exit(98);
	}
	printf("%s\n", buffer);

	if ((close(fd_in)) == -1)
	{
		dprintf(2, "Error: Closing file.\n");
		exit(100);
	}
	
	return (bytes_read);
}
