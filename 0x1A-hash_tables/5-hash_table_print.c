#include "hash_tables.h"
/**
 * hash_table_print - Prints hash table.
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{

unsigned long int j;
hash_node_t *hash_n;
short int connector = 0;

if (ht == NULL)
	return;

putchar('{');
for (j = 0; j < ht->size; j++)
{
	hash_n = ht->array[j];
	while (hash_n != NULL)
	{
		if (connector)
			printf(", ");

		printf("'%s': '%s'", hash_n->key, hash_n->value);
		hash_n = hash_n->next;

		if (connector == 0)
			connector = 1;
	}
}
printf("}\n");
}
