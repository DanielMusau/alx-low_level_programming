#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to the beginning node.
 * @index: index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	temp = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	while (temp != NULL)
	{
		if (count == index)
			free(temp);
		count++;
		temp = temp->next;
	}

	return (1);
}
