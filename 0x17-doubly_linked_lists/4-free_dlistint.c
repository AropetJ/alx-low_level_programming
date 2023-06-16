#include "lists.h"

/**
 *free_dlistint - free a dlistint_t.
 *@head: the head of the list.
 */
void free_dlistint(dlistint_t *head)

{
dlistint_t *tmp1 = head, *tmp2;
if (!head)
return;
while (tmp1 != NULL)
{
tmp2 = tmp1->next;
free(tmp1);
tmp1 = tmp2;
}
}
