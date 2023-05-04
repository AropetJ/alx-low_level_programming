#include "main.h"

/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int.
 *
 * @b: a pointer to a string of 0 and 1 chars
 * to be converted.
 *
 * Return: Converted string.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int j;

	j = 0;
	result = 0;

	if (b == 0)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}

	j = 0;
	while (b[j] == '0' || b[j] == '1')
	{
		result <<= 1;
		result += b[j] - '0';
		j++;
	}
	return (result);
}
