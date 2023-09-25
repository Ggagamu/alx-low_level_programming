#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a listint_t list
 * @head: Linked list to be searched for
 *
 * Return: Address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *merr = head;
	listint_t *vite = head;

	if (!head)
		return (NULL);

	while (merr && vite && vite->next)
	{
		vite = vite->next->next;
		merr = merr->next;
		if (vite == merr)
		{
			merr = head;
			while (merr != vite)
			{
				merr = merr->next;
				vite = vite->next;
			}
			return (vite);
		}
	}

	return (NULL);
}
