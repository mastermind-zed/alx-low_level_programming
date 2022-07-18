#include "lists.h"

/**
  * *find_listint_loop - Entry point
  * @head: head of the listint_t list.
  *
  * Return: address of the node where the loop starts or NULL if no loop
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *live;
	listint_t *note;

	live = head;
	note = head;
	while (head && live && live->next)
	{
		head = head->next;
		live = live->next->next;

		if (head == live)
		{
			head = note;
			note =  live;
			while (1)
			{
				live = note;
				while (live->next != head && live->next != note)
				{
					live = live->next;
				}
				if (live->next == head)
					break;

				head = head->next;
			}
			return (live->next);
		}
	}
	return (NULL);
}
