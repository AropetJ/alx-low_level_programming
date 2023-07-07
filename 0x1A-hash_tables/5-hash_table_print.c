#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table.
 *
 * @ht: The hash table to print.
 *
 * Return: No return value
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned char comma_flag = 0;
	unsigned long int k;

	if (ht == NULL)
	{
		return;
	}
	putchar('{');

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			if (comma_flag == 1)
				putchar(',');

			node = ht->array[k];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					putchar(',');
			}
			comma_flag = 1;
		}
	}
	putchar('}');
	putchar('\n');
}
