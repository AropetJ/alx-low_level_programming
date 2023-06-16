#include "lists.h"

/**
 * print_dlistint - prints all elements ofa linked list
 *
 * @h: head of the list
 *
 * Return: number of nodes
 **/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (temp)
	{
		printf("%d\n", temp-> i);
		i++;
		temp = temp->next;
	}
	return (i);
}
