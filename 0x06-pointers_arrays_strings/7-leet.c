#include "main.h"

/**
* leet - a function that encode into 1337.
*
*@x: parametr
*
*  Return: x value
*/

char *leet(char *x)
{
	int a = 0;
	int b = 0;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (; x[a] != '\0'; a++)
	{
	for (; b < 10; b++)
	{
	if (x[a] == s1[b])
	{
	x[a] = s2[b];
	}
	}
	}
	return (x);
}
