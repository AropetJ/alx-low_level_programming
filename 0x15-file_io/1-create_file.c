#include "main.h"

/**
 * create_file - a function that creates a file.
 *
 * @filename: a pointer to the name of the file to be created.
 * @text_content: a pointer to the string to be writtten to the file.
 *
 * Return: 1 on success, -1 on failure.
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd, b, len = 0;

	if (filename == 0)
		return (-1);

	if (text_content != 0)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(fd, text_content, len);

	if (fd == -1 || b == -1)
		return (-1);

	close(fd);

	return (1);
}
