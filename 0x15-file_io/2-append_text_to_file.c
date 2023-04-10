#include "main.h"

/**
 * append_text_to_file - a function that appends text at
 * the end of a file.
 *
 * @filename: a pointer to the name of the file.
 * @text_content: a string to add to the end of the file.
 *
 * Return: 1 on success and -1 on failure, If filename is
 * NULL return -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, b, len = 0;

	if (filename == 0)
		return (-1);

	if (text_content != 0)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	b = write(o, text_content, len);

	if (o == -1 || b == -1)
		return (-1);

	close(o);

	return (1);
}
