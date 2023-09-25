#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: Pointer to the first element in the list.
 * @n: Data inserted in the new element
 *
 * Return: Pointer to the new node, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *dest;
	listint_t *shrt = *head;

	dest = malloc(sizeof(listint_t));
	if (!dest)
		return (NULL);

	dest->n = n;
	dest->next = NULL;

	if (*head == NULL)
	{
		*head = dest;
		return (dest);
	}

	while (shrt->next)
		shrt = shrt->next;

	shrt->next = dest;

	return (dest);
}
