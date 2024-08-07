#include "main.h"

/**
 * read_textfile - Reads n characters from a given text file.
 * @filename: Pointer to the file being processed.
 * @letters: The required number of characters to be printed.
 *
 * Return: The number of characters it can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdescri;
	ssize_t count, byte_count;
	char *read_buffer;

	if (filename == NULL)
		return (0);
	read_buffer = malloc(sizeof(char) * letters);
	if (read_buffer == NULL)
		return (0);
	fdescri = open(filename, O_RDONLY);

	if (fdescri == -1)
	{
		free(read_buffer);
		return (0);
	}
	count = read(fdescri, read_buffer, letters);
	if (count <= 0)
	{
		close(fdescri);
		free(read_buffer);
		return (0);
	}
	byte_count = write(STDOUT_FILENO, read_buffer, count);
	if (byte_count <= 0 || byte_count != count)
	{
		free(read_buffer);
		close(fdescri);
		return (0);
	}

	close(fdescri);
	free(read_buffer);
	return (count);
}
