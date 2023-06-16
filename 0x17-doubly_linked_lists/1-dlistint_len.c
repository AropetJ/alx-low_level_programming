#include "lists.h"

/**
 * dlistint_len - get the number of nodes
 *
 * @h: the head of the list
 * 
 * Return: the number of nodes
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t n;
	const dlistint_t *tmp = h;

	for (n = 0; tmp != NULL; n++)
	{
		tmp = tmp-> next;
	}
	return (n);
}
