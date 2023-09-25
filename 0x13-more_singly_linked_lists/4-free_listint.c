#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *shrt;

	while (head)
	{
		shrt = head->next;
		free(head);
		head = shrt;
	}
}
