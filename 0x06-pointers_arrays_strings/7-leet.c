#include "main.h"

/**
* leet -> a function to encode into 1337
* @x: parameter.
* Return: a string
*/

char *leet(char *x)
{
	int i;
	int j = 0;
	int l = 5;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (x[j])
	{
		i = 0;
		while (i < l)
		{
			if (x[j] == s1[i])
			{
				x[j] = s2[i];
				i++;
			}
		}
		j++;
	}
	return (x);
}
