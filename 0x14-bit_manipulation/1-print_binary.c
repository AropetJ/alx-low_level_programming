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

	i = 0;
	j = 0;

	for (i = 63; i >= 0; i--)
	{
		_putchar(n & (1u << i) ? '1' : '0');
		j++;
	}
	if (!j)
		_putchar('0');
}
