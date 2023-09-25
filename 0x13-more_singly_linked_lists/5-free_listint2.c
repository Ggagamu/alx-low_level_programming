#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: Pointer to listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *shrt;

	if (head == NULL)
		return;

	while (*head)
	{
		shrt = (*head)->next;
		free(*head);
		*head = shrt;
	}

	*head = NULL;
}
