#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: pointer to the first element in the linked list
 *
 * Return: the head node’s data.
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp = (*head)->next;

	if (!head)
	{
		return (0);
	}

	num = (*head)->n;

	free(*head);
	*head = temp;

	return (num);
}
