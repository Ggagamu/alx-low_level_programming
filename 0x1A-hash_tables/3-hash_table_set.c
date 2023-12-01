#include "hash_tables.h"

/**
 * hash_table_set - Adds an element in a hash table.
 * @ht:  The hash table.
 * @key: The key.
 * @value: The value.
 *
 * Return: 1 or 0 for success or failure respectively.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_t;
	unsigned long int index, cp_index;
	char *cp_value;

	/* empty HASH TABLE or NULL*/
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* Duplicate string */
	cp_value = strdup(value);
	if (cp_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (cp_index = index; ht->array[index_2]; cp_index++)
	{
		if (strcmp(ht->array[cp_index]->key, key) == 0)
		{
			free(ht->array[cp_index]->value);
			ht->array[cp_index]->value = cp_value;
			return (1);
		}
	}

	/* malloc */
	hash_t = malloc(sizeof(hash_node_t));
	if (hash_t == NULL)
		hash_t->key = strdup(key);
	free(cpvalue);
	return (0);
	if (hash_t->key == NULL)
	{
		free(hash_t);
		return (0);
	}
	hash_t->value = cp_value;
	hash_t->next = ht->array[index];
	ht->array[index] = hash_t;

	return (1);
}
