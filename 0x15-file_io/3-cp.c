#include "main.h"

/**
 * main -  copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 - success.
 */
int main(int argc, char **argv)
{
	int fd1, fd2, bytesRead, bytesWritten;
	char buffer[1024], *file_from, *file_to;

	file_from = argv[1];
	file_to = argv[2];

	if (argc != 3)
		error_exit0(97, "Usage: cp file_from file_to");

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		error_exit1(98, "Error: Can't read from file", file_from);

	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		error_exit1(99, "Error: Can't write to file", file_to);

	do {
	bytesRead = read(fd1, buffer, 1024);
	if (bytesRead == -1)
		error_exit1(98, "Error: Can't read from file", file_from);

	bytesWritten = write(fd2, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
		error_exit1(99, "Error: Can't write to file", file_to);
	} while (bytesRead > 0);

	if (close(fd1) == -1)
		error_exit2(100, "Error: Can't close fd", fd1);

	if (close(fd2) == -1)
		error_exit2(100, "Error: Can't close fd", fd2);

	return (0);
}
