#include "lists.h"

/**
 * get_dnodeint_at_index - function that gets node index
 *
 * @head: the head of the node
 * @index: the index of the node
 *
 * Return: the node at the index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 1;

	dlistint_t *node;

	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	else
	{
		node = head->next;
		while (node && j <= index)
		{
			if (index == j)
				return (node);
			j++;
			node = node->next;
		}
	}
	return (NULL);
}
