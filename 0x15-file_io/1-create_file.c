#include "main.h"

/**
 * create_file - a function that creates a file.
 *
 * @filename:  the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure .
 */

int create_file(const char *filename, char *text_content)
{
	int i, wr, fd;

	len = 0;
	wr = 0;
	i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i; text_content[i];)
			i++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
