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
	listint_t *temp;

	if (!head || !(*head))
	{
		return (0);
	}

	temp = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = temp;

	return (num);
}
