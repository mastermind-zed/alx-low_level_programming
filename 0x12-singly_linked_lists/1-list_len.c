#include "lists.h"

/**
 * list_len - Entry point
 * @h: Pointer to linked list
 * Return: Number of elements in the list
 */

size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next != NULL)
		return (list_len(h->next) + 1);
	return (1);
}
