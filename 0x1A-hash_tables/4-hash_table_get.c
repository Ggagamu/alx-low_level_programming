#include "hash_tables.h"
/**
 * hash_table_get - Gets value associated with a key.
 * @ht: Hash table.
 * @key: The key.
 * Return: value or NULL if failure.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

hash_node_t *hash_n;
unsigned long int j;

if (ht == NULL)
	return (NULL);

j = key_index((const unsigned char *) key, ht->size);
hash_n = ht->array[j];

while (hash_n != NULL)
{
	if (strcmp(hash_n->key, key) == 0)
		return (hash_n->value);

	hash_n = hash_n->next;
}
return (NULL);
}
