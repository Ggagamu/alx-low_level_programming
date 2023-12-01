#include "hash_tables.h"
/**
 * hash_table_delete - Deletes hash table
 * @ht: The hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int j;
hash_node_t *hash_n;

if (ht == NULL)
	return;

for (j = 0; j < ht->size; j++)
{
	hash_n = ht->array[j];
	free_hash_list(hash_n);
}
free(ht->array);
free(ht);
}


/**
 * free_hash_list - Frees hash_node_t list
 * @head: Head
 */
void free_hash_list(hash_node_t *head)
{
	hash_node_t *temp;
	hash_node_t *next;

	temp = head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = next;
	}
}
