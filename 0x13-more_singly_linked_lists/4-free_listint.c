#include "lists.h"

/**
 * free_listint - Entry Point
 * @head: head of the listint_t list
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *actual_node;
	listint_t *next_node;

	actual_node = head;

	while (actual_node != NULL)
	{
		next_node = actual_node->next;
		free(actual_node);
		actual_node = next_node;
	}
}
