#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of the list
 * @head: pointer to a pointer to a linked list
 * @str: Pointer for a string input
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *pass;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	pass = *head;

	new_node->str = strdup(str);
	new_node->len  = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (pass->next != NULL)
		pass = pass->next;
	pass->next = new_node;
	return (*head);
}

/**
 * _strlen - returns the length of the string
 *@s: string being counted
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
