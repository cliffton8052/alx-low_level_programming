#include "lists.h"

/**
 * find_listint_loop - Find the start of the loop in a linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			while (head != fast)
			{
				head = head->next;
				fast = fast->next;
			}
			return (head);
		}
	}

	return (NULL);
}

