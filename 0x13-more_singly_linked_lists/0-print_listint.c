#include "lists.h"

/**
 * print_listint - prints a linked list
 * @h: pointer to first node
 *
 * Return: size of list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

