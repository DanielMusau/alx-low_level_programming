#include "lists.h"
listint_t *create_node(const int n);

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

	new_node = create_node(n);

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;

	return (*head);
}

/**
 * create_node - Creates a node.
 * @n: value for the node.
 * Return: A pointer to the beginning of the list.
 */
listint_t *create_node(const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
