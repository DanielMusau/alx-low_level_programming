#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list.
 * @head: head of the list.
 * @n: integer to be added.
 *
 * Return: Address of the new element or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	if (*head == NULL)
		ptr->next = NULL;
	else
		ptr->next = *head;
	ptr->n = n;
	*head = ptr;

	return (*head);
}
