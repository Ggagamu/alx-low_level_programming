#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list
 * @head:Ppointer to the first node in the list
 *
 * Return: Pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->new;
		(*head)->new = old;
		old = *head;
		*head = new;
	}

	*head = old;

	return (*head);
}
