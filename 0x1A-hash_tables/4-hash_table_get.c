#include "hash_tables.h"
/**
 * hash_table_get - Gets value associated with a key.
 * @ht: Hash table.
 * @key: The key.
 * Return: value or NULL if failure.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

hash_node_t *hash_t;
unsigned long int j;

if (ht == NULL)
	return (NULL);

j = key_index((const unsigned char *) key, ht->size);
hash_t = ht->array[j];

while (hash_t != NULL)
{
	if (strcmp(hash_t->key, key) == 0)
		return (hash_t->value);

	hash_t = node->next;
}
return (NULL);
}
