#include "hash_tables.h"

/**
 * key_index - Is the index where the key is put.
 * @key: Index key.
 * @size: Size of the array.
 * Return: Index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
