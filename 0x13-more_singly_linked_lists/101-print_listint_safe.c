#include "lists.h"

/**
 * print_listint_safe - Print a listint_t linked list safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current = head;
	const listint_t **address_table = malloc(sizeof(listint_t *) * 1024);

	if (address_table == NULL)
	{
		printf("Memory allocation failed\n");
		exit(98);
	}

	while (current != NULL)
	{
		size_t index = (size_t)current % 1024;

		if (address_table[index] == current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			printf("Loop detected!\n");
			free(address_table);
			exit(98);
		}

		printf("[%p] %d\n", (void *)current, current->n);
		address_table[index] = current;
		current = current->next;
		node_count++;
	}

	free(address_table);
	return (node_count);
}

