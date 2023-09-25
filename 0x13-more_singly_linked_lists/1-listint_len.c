#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: linked list to be traversed
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t non = 0;

	while (h)
	{
		non++;
		h = h->next;
	}

	return (non);
}
