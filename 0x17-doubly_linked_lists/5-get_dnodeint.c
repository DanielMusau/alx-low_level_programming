#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Head of the list.
 * @index: is the index of the node starting from 0.
 *
 * Return: The nth node or NUL if node doesnt exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}
	return (head);
}
