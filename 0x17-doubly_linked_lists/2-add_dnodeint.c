#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of
 * a doubly linked list.
 * @head: beginning of the linked list.
 * @n: data to be added.
 *
 * Return: the address of the new element or NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	ptr = *head;

	if (ptr != NULL)
	{
		while (ptr->prev != NULL)
			ptr = ptr->prev;
	}

	new->next = ptr;

	if (ptr != NULL)
		ptr->prev = new;

	*head = new;

	return (new);
}
