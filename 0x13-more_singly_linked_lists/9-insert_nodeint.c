#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a listint_t list at a given position
 * @head: Pointer to the first node in the list
 * @idx: Index where the new node is added
 * @n: Data to be inserted in the new node
 *
 * Return: pointer to the new node, or NULL if not possible to add node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *shrt = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; shrt && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = shrt->next;
			shrt->next = new;
			return (new);
		}
		else
			shrt = shrt->next;
	}

	return (NULL);
}
