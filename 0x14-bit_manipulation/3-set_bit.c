#include "main.h"

/**
 * set_bit - a function that sets the value of
 * a bit to 1 at a given index.
 *
 * @n: pointer to store the int.
 * @index: the location of the bit.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (1 << index) | *n;
	return (1);
}
