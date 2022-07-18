#include "lists.h"

/**
 * *add_nodeint_end - Entry point
 * @head: head of the listint_t list
 * @n: constant integer
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mint;
	listint_t *tip;

	mint = malloc(sizeof(listint_t));

	if (mint == NULL)
		return (NULL);

	mint->n = n;
	mint->next = NULL;

	if (*head == NULL)
	{
		*head = mint;
		return (mint);
	}
	tip = *head;

	while (tip->next != NULL)
		tip = tip->next;
	tip->next = mint;

	return (mint);
}
