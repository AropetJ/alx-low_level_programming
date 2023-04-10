#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number.
 *
 * @n: a number to be converted.
 *
 * Return: 0 always.
 */

void print_binary(unsigned long int n)
{
	int j;
	int i;
	unsigned long int x;

	i = 0;
	j = 0;

	for (i = 63; i >= 0; i--)
	{
		x = n >> i;

		if (x & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
