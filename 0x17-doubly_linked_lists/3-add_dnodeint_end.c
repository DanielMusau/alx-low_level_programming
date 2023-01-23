#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of
 * a doubly linked list.
 * @head: beginning of the linked list.
 * @n: data to be added.
 *
 * Return: the address of the new element or NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	ptr = *head;

	if (head == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new_node;

	return (*head);
}
