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
	int i;

	i = (sizeof(unsigned int) * 8) - 1;

	while (i > 0 && !(n & (1u << i)))
		i--;

	for (;i >= 0; i--)
	{
		_putchar(n & (1u << i) ? '1' : '0');
	}
}
