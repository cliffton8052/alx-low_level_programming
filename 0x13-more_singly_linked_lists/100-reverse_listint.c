#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head;

	while (current)
	{
		*head = current->next;

		current->next = prev;

		prev = current;
		current = *head;
	}

	*head = prev;

	return (*head);
}

