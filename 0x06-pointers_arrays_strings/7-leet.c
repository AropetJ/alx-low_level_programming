#include "main.h"

/**
* leet - a function to encode into 1337
*
* @x: input value
*
* Return: x value
*/

char *leet(char *x)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; x[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (x[i] == s1[j])
	{
	x[i] = s2[j];
	}
	}
	}
	return (x);
}
