#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key.
 *
 * @ht: the hash table.
 * @key: The key to be retrieved.
 *
 * Return: the value associated with the element, or NULL if key
 * couldn’t be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int location;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	location = key_index((const unsigned char *)key, ht->size);
	if (location >= ht->size)
	{
		return (NULL);
	}

	node = ht->array[location];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}

	return ((node == NULL) ? NULL : node->value);
}
