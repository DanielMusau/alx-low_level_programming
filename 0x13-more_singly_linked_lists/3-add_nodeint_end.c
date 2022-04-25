#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list.
 * @head: Beginning of the list.
 * @n: Integer to be added.
 *
 * Return: Address of the new element or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new_node;

	ptr = *head;
	if (head == NULL)
		return (NULL);

	new_node = (listint_t*)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if(*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	new_node->n = n;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	return (*head);
}
