#include "lists.h"

/**
 *delete_dnodeint_at_index - function that delete a node.
 *@head: the head of the node.
 *@index: the index to delete.
 *Return: 1 successfull, -1 error.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *tmp, *prevn;
if (*head == NULL)
return (-1);
if (index == 0)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
return (1);
}
else
{
tmp = (*head)->next;
prevn = *head;
while (tmp)
{
if (index == i)
{
prevn->next = tmp->next;
(tmp->next)->prev = prevn;
free(tmp);
return (1);
}
tmp = tmp->next;
prevn = prevn->next;
i++;
}
}
return (-1);
}
