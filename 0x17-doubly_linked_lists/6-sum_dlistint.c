#include "lists.h"

/**
 * sum_dlistint - Sums up the data of a dlistint_t linked list.
 * @head: Pointer to the head.
 *
 * Return: Sum of all data in list, or 0 if empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
