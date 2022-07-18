#include "lists.h"

/**
 * pop_listint - Entry point
 * @head: head of listint_t list
 *
 * Return: The n value contained within the deleted head node, or 0 if the list
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	n = 0;

	if (head && *head)
	{
		ptr = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = ptr;
	}

	return (n);
}
