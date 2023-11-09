#include "lists.h"

/**
 * dlistint_len - Counts the number of nodes in dlinked list
 * @h: Pointer to the head of a linked list
 *
 * Return: Number of nodes printed
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
