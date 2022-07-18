#include "lists.h"

/**
 * sum_listint - Entry point
 * @head: pointer to structure
 * Return: add
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (head)
	{
		while (head)
		{
			add += head->n;
			head = head->next;
		}
		return (add);
	}
	else
		return (0);
}
