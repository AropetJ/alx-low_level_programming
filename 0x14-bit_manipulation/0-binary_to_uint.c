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
	int i;

	i = 0;
	result = 0;

	if (b == 0)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	i = 0;
	while (b[i] == '0' || b[i] == '1')
	{
		result <<= 1;
		result += b[i] - '0';
		i++;
	}
	return (result);
}
