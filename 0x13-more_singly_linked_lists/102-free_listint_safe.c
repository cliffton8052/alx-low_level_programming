#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loopfl - finds a loop in linked list
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
 * @h: Pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h, *fast = *h;
	size_t count = 0;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = *h;

			do {
				slow = slow->next;
				count++;
			} while (slow != fast);

			fast = *h;
			while (slow->next != fast)
			{
				slow = slow->next;
				count++;
			}
			while (count > 0)
			{
				listint_t *temp = fast->next;

				free(fast);
				fast = temp;
				count--;
			}
			*h = NULL;
			return (count);
		}
	}
	while (*h)
	{
		listint_t *temp = (*h)->next;

		free(*h);
		*h = temp;
		count++;
	}
	return (count);
}
