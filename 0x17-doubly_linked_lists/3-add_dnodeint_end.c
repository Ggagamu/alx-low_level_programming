#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of dlist
 * @head: Pointer to head
 * @n: Value of node added
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp_list = NULL, *end = *head;

	temp_list = malloc(sizeof(dlistint_t));

	if (temp_list == NULL)
	{
		return (NULL);
	}
	temp_list->n = n;
	temp_list->prev = NULL;
	temp_list->next = NULL;

	if (*head == NULL)
	{
		*head = temp_list;
		return (*head);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}
	temp_list->prev = end;
	end->next = temp_list;

	return (temp_list);
}
