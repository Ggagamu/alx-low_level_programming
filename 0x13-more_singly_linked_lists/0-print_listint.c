#include "lists.h"

/**
 * print_listint - Prints the elements of a linked list
 * @h: linked list of data type listint_t
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t non = 0;

	while (h)
	{
		printf("%d\n", h->n);
		non++;
		h = h->next;
	}

	return (non);
}
