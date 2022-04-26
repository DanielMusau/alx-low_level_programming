#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: pointer to the beginning node.
 * @index: index of the node.
 *
 * Return:The nth node of NULL if node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	temp = head;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}

	return (head);
}
