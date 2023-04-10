#include "main.h"

/**
 * get_bit -  a function that returns the value
 * of a bit at a given index.
 *
 * @n: integer whose index will be returned.
 * @index: index to be obtained.
 *
 * Return: the value of the bit at index index or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	index = (n >> index) & 1;

	return (index);
}
