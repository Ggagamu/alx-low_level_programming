#include "hash_tables.h"

/**
 * hash_table_create - Creates hash table.
 * @size: Array size.
 *
 * Return: Pointer to new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int j;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);
	hash_t->size = size;
	hash_t->array = malloc(size * sizeof(hash_node_t *));
	if (hash_t->array == NULL)
	{
		free(hash_t);
		return (NULL);
	}
	for (j = 0; j < size; j++)
		hash_t->array[j] = NULL;
	return (hash_t);
}
