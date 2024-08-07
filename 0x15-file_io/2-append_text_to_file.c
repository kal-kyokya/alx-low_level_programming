#include "main.h"

/**
 * append_text_to_file - Adds text at the end of a file.
 * @filename: String name of file to have content appended to it.
 * @text_content: String text to be written in file.
 *
 * Return: 1 if program runs successfully, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdescri;
	int count;

	count = 0;
	if (filename == NULL)
		return (-1);
	fdescri = open(filename, O_WRONLY | O_APPEND);
	if (fdescri == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
		count = write(fdescri, text_content, count);
		if (count == -1)
		{
			close(fdescri);
			return (-1);
		}
	}

	close(fdescri);
	return (1);
}
