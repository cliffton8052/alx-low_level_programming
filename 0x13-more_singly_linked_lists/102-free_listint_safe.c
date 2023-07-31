#include "lists.h"

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
