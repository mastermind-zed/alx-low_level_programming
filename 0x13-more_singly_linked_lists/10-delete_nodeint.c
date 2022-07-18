#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 * @head: head of  the listint_t list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *prior;
	listint_t *after;

	after = *head;
	x = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = after->next;
		free(after);
		return (1);
	}

	while (after != NULL && x < index - 1)
	{
		after = after->next;
		x++;
		if (after == NULL || after->next == NULL)
			return (-1);
	}

	prior = after->next->next;
	free(after->next);
	after->next = prior;

	return (1);
}
