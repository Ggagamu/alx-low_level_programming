#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: A double pointer to the list_t list
 * @str: The new string to be added to the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int src = 0;

	while (str[src])
		src++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->src = src;
	new->next = (*head);
	(*head) = new;

	return (*head);
}