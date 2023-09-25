#include "lists.h"

/**
 * free_listint_safe - Safely frees a listint_t list
 * @h: Pointer to the first node in the linked list
 *
 * Return: The number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t leng = 0;
	int min;
	listint_t *shrt;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		min = *h - (*h)->next;
		if (min > 0)
		{
			shrt = (*h)->next;
			free(*h);
			*h = shrt;
			leng++;
		}
		else
		{
			free(*h);
			*h = NULL;
			leng++;
			break;
		}
	}

	*h = NULL;

	return (leng);
}
