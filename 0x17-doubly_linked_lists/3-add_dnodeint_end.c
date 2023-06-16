#include "lists.h"

/**
 *add_dnodeint_end - add node at the end of the list.
 *@head: the head of the list.
 *@n: the integer to add.
 *Return: the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *tmp = *head;
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node->n = n;
if (tmp == NULL)
*head = new_node;
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new_node;
new_node->prev = tmp;
}
return (new_node);
}
