#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data of a listint_t list
 * @head: First node in the linked list
 *
 * Return: sum or 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *shrt = head;

	while (shrt)
	{
		sum += shrt->n;
		shrt = shrt->next;
	}

	return (sum);
}
