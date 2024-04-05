#include "main.h"

/**
 * create_file - Create a file with read and write permissions.
 * @filename: String name of the file.
 * @text_content: String text to be written inside the file.
 *
 * Return: 1 if programs runs succesfully, -1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int fdescri;
	int count;
	ssize_t bytes_written;

	count = 0;
	if (filename == NULL)
		return (-1);
	fdescri = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdescri == -1)
		return (-1);
	while (text_content[count] != '\0')
		count++;
	if (text_content != NULL)
	{
		bytes_written = write(fdescri, text_content, count);
		if (bytes_written <= 0)
		{
			close(fdescri);
			return (-1);
		}
	}

	close(fdescri);
	return (1);
}
