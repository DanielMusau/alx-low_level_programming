#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: Head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while (temp != NULL)
	{
		head = head->next;
		free(temp);
	}
}
