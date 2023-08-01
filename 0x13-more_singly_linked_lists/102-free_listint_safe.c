#include "lists.h"

/**
 * find_listint_loop_fl - finds a loop in linked list
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns NULL
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: pointer to a pointer to head of linked list
 *
 * Return: number nodes freed
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopnode;
	size_t count;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loopnode = find_listint_loop_fl(*h);
	for (count = 0; (*h != loopnode || loop) && *h != NULL; *h = next)
	{
		count++;
		next = (*h)->next;
		if (*h == loopnode && loop)
		{
			if (loopnode == loopnode->next)
			{
				free(*h);
				break;
			}
			count++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (count);
}
