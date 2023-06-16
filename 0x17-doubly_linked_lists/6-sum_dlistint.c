#include "lists.h"

/**
 *sum_dlistint - the sum of all integers
 *@head: the head of list.
 *Return: the sum.
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

dlistint_t *tmp = head;
if (!head)
return (0);
while (tmp)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
