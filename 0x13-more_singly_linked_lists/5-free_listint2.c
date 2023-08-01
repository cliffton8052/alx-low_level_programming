#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (head)
		return;

	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
