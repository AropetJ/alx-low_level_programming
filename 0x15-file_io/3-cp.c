#include "main.h"

/**
 * main - a program that copies the content of a file to another file.
 *
 * @ac: The number of arguments to the program.
 * @av: A string array containing the arguments.
 *
 * Return: 0 on success always.
 */

int main(int ac, char **av)
{
	char *buff;
	int rd, wr, b, a;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = make_buff(av[2]);
	a = open(av[1], O_RDONLY);
	wr = read(a, buff, 1024);
	b = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (a == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", av[1]);
			free(buff);
			exit(98);
		}

		wr = write(b, buff, rd);
		if (b == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", av[2]);
			free(buff);
			exit(99);
		}
		rd = read(a, buff, 1024);
		b = open(av[2], O_WRONLY | O_APPEND);
	}
	while (rd > 0)
		;
	free(buff);
	close_fd(b);
	close_fd(a);

	return (0);
}

/**
 * close_fd - a function that closes a file descriptor.
 *
 * @fd: a file descriptor that will be closed.
 */

void close_fd(int fd)
{
	int d;

	d = close(fd);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * make_buff - Creates a buffer & allocates 1024 bytes to it.
 *
 * @file: the buffer to which files will be stored.
 *
 * Return: A pointer to the newly created buffer.
 */

char *make_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
