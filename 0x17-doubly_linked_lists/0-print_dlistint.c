#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of dlistint_t list
 * @h: Pointer to the head of the linked list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
