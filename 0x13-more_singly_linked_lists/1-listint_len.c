#include "lists.h"

/**
 * listint_len - Count the number of elements in a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements (nodes) in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		node_count++;
	}

	return (node_count);
}

