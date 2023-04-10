#include "main.h"

/**
 * flip_bits -  a function that returns the number
 * of bits you would need to flip to get from one
 * number to another.
 * @n: int to be flipped
 * @m: int to be flipped
 *
 * Return: the number of bits you would need to flip
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int l = n ^ m;
	unsigned long int k;

	for (i = 63; i >= 0; i--)
	{
		k = l >> i;
		if (k & 1)
			j++;
	}
	return (j);
}
