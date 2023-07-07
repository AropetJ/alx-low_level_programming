#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table.
 *
 * @size: The size of the array.
 *
 * Return: If something went wrong, your function should return NULL.
 *         Otherwise - Returns a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int j;
	hash_table_t *hashTable;

	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
	{
		return (NULL);
	}

	hashTable->size = size;
	hashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashTable->array == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		hashTable->array[j] = NULL;
	}
	return (hashTable);
}
