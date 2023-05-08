#include "main.h"

/**
 * read_textfile- a function that reads a text file and prints
 * it to the POSIX standard output.
 *
 * @filename: the text file being read
 * @letters: is the number of letters it should read and print.
 *
 * Return: b- the actual number of letters it could read and print.
 *        0 if the function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buff;
	ssize_t wr;
	ssize_t r;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	r = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);

	return (b);
}
