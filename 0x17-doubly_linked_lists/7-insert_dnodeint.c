#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert node at give position.
 * @h: Pointer to head of node.
 * @idx: Position of new node.
 * @n: Value of new node.
 * Return: Address of new dlistint_t.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp_node = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int i = 0;

	if (h == NULL || temp_node == NULL)
	{
		return (NULL);
	}
	temp_node->n = n;
	temp_node->next = NULL;
	temp_node->prev = NULL;
	current = *h;

	if (idx == 0)
	{
		temp_node = add_dnodeint(h, n);
		return (temp_node);
	}
	while (current)
	{
		if (current->next == NULL && i == idx - 1)
		{
			temp_node = add_dnodeint_end(h, n);
			return (temp_node);
		}
		else if ((idx - 1) == i)
		{
			temp_node->next = current->next;
			temp_node->prev = current;
			current->next->prev = temp_node;
			current->next = temp_node;
			return (temp_node);
		}
		i++;
		current = current->next;
	}
	free(temp_node);
	return (NULL);
}
