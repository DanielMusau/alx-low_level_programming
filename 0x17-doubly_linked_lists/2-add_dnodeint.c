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
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (*head);
}
