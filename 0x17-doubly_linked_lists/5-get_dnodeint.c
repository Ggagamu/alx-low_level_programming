#include "lists.h"

/**
 * get_dnodeint_at_index - Find node in list.
 * @head: Pointer to head.
 * @index: Index of node, starting at 0.
 * Return: Node address or NULL if doen't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (index == i)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
