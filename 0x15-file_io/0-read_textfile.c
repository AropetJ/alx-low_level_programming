#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 *
 * @filename: a text file being read from
 * @letters: the number of letters to be read to the POSIX
 *
 * Return: b- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t b;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	b = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (b);
}
