#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table.
 * @ht: A hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j;
	hash_table_t *top = ht;
	hash_node_t *temp, *node;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			node = ht->array[j];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(top->array);
	free(top);
}
