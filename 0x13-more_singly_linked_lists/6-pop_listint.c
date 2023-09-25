#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Pointer to the first element in the linked list.
 *
 * Return: the head node’s data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *shrt;
	int non;

	if (!head || !*head)
		return (0);

	non = (*head)->n;
	shrt = (*head)->next;
	free(*head);
	*head = shrt;

	return (non);
}
