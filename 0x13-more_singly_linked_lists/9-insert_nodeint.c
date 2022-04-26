#include "lists.h"
listint_t *create_node(const int n);

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: pointer to the beginning node.
 * @idx: Index where the new node should be added.
 * @n: The data to be added.
 *
 * Return: the address of the new node, or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node, *temp_old;
	unsigned int count = 0;

	temp = *head;

	if (head == NULL)
		return (NULL);
	new_node = create_node(n);

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
		*head = new_node;

	for (count = 0; count < idx - 1 && temp != NULL && idx != 0; count++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = temp;
	else
	{
		temp_old = temp->next;
		temp->next = new_node;
		new_node->next = temp_old;
	}
	return (new_node);
}
