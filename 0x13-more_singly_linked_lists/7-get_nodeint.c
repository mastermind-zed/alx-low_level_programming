#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * @head: head of the listint_t list
 * @index:index of the node, starting at 0
 *
 * Return: The address of the nth node or NULL if it does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count;

	ptr = head;
	count = 0;

	while (ptr)
	{
		if (count == index)
			return (ptr);
		count++;
		ptr = ptr->next;
	}
	return (NULL);
}
