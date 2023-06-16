#include "lists.h"

/**
 * delete_dnodeint_at_index - function that delete a node.
 *
 * @head: the head of the node.
 * @index: the index to delete.
 *
 * Return: 1 successfull, -1 error.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prevn;
	unsigned int j = 0;
	
	if (*head == NULL)
		return (-1);
	
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		temp = (*head)->next;
		prevn = *head;
		while (temp)
		{
			if (index == j)
			{
				prevn->next = temp->next;
				(temp->next)->prev = prevn;
				free(temp);
				return (1);
			}
			temp = temp->next;
			prevn = prevn->next;
			j++;
		}
	}
	
	return (-1);
}
