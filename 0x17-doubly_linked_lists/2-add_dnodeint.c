#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head of the list.
 * @n: data of each node.
 *
 * Return: Address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (ptr != NULL)
	{
		while (ptr->prev != NULL)
			ptr = ptr->prev;
	}

	temp->next = temp;

	if (ptr != NULL)
		ptr->prev = temp;

	return (*head);
}
