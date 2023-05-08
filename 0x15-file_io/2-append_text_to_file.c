#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: the name of the file.
 * @text_content:  is the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i;

	i = 0;
	fd = 0;
	wr = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (w == -1)
		return (-1);

	wr = write(o, text_content, len);
	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
