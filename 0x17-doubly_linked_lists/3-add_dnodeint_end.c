#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Head of the list.
 * @n: data to be added in the list.
 *
 * Return: address of the new element or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *tp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	tp = *head;

	if (tp != NULL)
	{
		while (tp->next != NULL)
			tp = tp->next;
		tp->next = temp;
	}
	else
	{
		*head = temp;
	}

	temp->prev = tp;

	return (temp);
}
