#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of dlinked list
 * @head: Pointer to head
 * @n: Value of node added
 * Return: dlistint_t or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new, *node = malloc(sizeof(dlistint_t));


	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (*head);
	}
	new = *head;
	node->next = new;
	new->prev = node;
	*head = node;
	return (node);
}
