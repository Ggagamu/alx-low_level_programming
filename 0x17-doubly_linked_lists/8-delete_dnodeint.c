#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at given position.
 * @head: Pointer to head of node.
 * @index: Position of the node to delete.
 * Return: 1 if succeess, -1 failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp_node = *head;
	if (index == 0)
	{
		*head = temp_node->next;
		if (temp_node->next != NULL)
		{
			temp_node->next->prev = NULL;
		}
		free(temp_node);
		return (1);
	}
	for (i = 0; temp_node != NULL && i < index - 1; i++)
	{
		temp_node = temp_node->next;
	}
	if (temp_node == NULL || temp_node->next == NULL)
	{
		return (-1);
	}

	if (temp_node->next->next != NULL)
	{
		temp_node->next = temp_node->next->next;
		free(temp_node->next->prev);
		temp_node->next->prev = temp_node;
		return (1);
	}
	else
	{
		free(temp_node->next);
		temp_node->next = NULL;
		return (1);
	}
	return (-1);
}
