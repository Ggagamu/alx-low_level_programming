#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the first node in the list
 * @n: Data to put in the new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *dest;

	dest = malloc(sizeof(listint_t));
	if (!dest)
		return (NULL);

	dest->n = n;
	dest->next = *head;
	*head = dest;

	return (dest);
}
