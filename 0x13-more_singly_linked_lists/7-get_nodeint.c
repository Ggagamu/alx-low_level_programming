#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node in a listint_t list
 * @head: First node in the linked list
 * @index: Index of the node to return
 *
 * Return: pointer to the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *shrt = head;

	while (shrt && j < index)
	{
		shrt = shrt->next;
		j++;
	}

	return (shrt ? shrt : NULL);
}
