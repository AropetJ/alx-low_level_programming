#include "lists.h"

/**
 * insert_dnodeint_at_index - function that insert a node.
 *
 * @h: the head of the list.
 * @idx: the index where to insert.
 * @n: the integer.
 *
 * Return: new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prevn, *temp;
	unsigned int j = 1;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	
	if (*h == NULL || !new_node)
		return (NULL);
	
	new_node->n = n;
	temp = (*h)->next;
	prevn = *h;
	
	while (temp)
		if (idx == 0)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
			return (new_node);
		}
		else
		{
			while (temp)
			{
				if (idx == j)
				{
					new_node->next = temp;
					temp->prev = new_node;
					prevn->next = new_node;
					return (new_node);
				}
				prevn = temp;
				temp = temp->next;
				j++;
			}
		}
	return (NULL);
}
