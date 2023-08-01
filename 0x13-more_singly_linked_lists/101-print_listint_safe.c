#include "lists.h"

/**
 * _r - reallocates mem of array pointers to nodes
 * @list: old list to append
 * @size: size of the new list
 * @new: new node to add to the list
 *
 * Return: pointer to new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t count;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (count = 0; count < size - 1; count++)
		newlist[count] = list[count];
	newlist[count] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to start of list
 *
 * Return: the number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (count = 0; count < num; count++)
		{
			if (head == list[count])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}