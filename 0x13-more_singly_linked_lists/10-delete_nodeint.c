#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a listint_t list index index
 * @head: Pointer to the first element in the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *shrt = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(shrt);
		return (1);
	}

	while (j < index - 1)
	{
		if (!shrt || !(shrt->next))
			return (-1);
		shrt = shrt->next;
		j++;
	}


	current = shrt->next;
	shrt->next = current->next;
	free(current);

	return (1);
}
