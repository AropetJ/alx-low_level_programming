#include <stdio.h>
#include <ctype.h>

/**
* print_buffer - prints buffer
* @b: buffer
* @size: size
* Return: void
*/

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
	for (j = i; j < i + 10; j += 2)
	{
		if (j < size)
			printf("%02x", (unsigned char)b[j]);
		else
			printf("  ");
		if (j + 1 < size)
		{
			printf("%02x ", (unsigned char)b[j + 1]);
		}
		else
		{
			printf("   ");
		}
	}
	printf(" ");
	for (j = i; j < i + 10; j++)
	{
		if (j < size)
		{
			printf("%c", isprint(b[j]) ? b[j] : '.');
		}
		else
			printf(" ");
	}
	printf("\n");
	}
}
