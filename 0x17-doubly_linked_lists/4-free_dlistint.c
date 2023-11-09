#include "lists.h"

/**
 * free_dlistint - Frees a dlinked list.
 * @head: dlistin_t to free.
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_list;

	while (head)
	{
		temp_list = head;
		head = head->next;
		free(temp_list);
	}
}
