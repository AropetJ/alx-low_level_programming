#include "lists.h"

/**
 *insert_dnodeint_at_index - function that insert a node.
 *@h: the head of the list.
 *@idx: the index where to insert.
 *@n: the integer.
 *Return: new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 1;
dlistint_t *tmp, *prevn;
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (*h == NULL || !new_node)
return (NULL);
new_node->n = n;
tmp = (*h)->next;
prevn = *h;
while (tmp)
if (idx == 0)
{
new_node->next = *h;
(*h)->prev = new_node;
return (new_node);
}
else
{
while (tmp)
{
if (idx == i)
{
new_node->next = tmp;
tmp->prev = new_node;
prevn->next = new_node;
return (new_node);
}
prevn = tmp;
tmp = tmp->next;
i++;
}
}
return (NULL);
}
