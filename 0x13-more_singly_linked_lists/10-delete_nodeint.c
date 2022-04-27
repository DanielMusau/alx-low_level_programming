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
	listint_t *node;

	temp = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	while (temp != NULL && count < index - 1 && index != 0)
	{
		count++;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		node = temp->next;
		free(temp);
		*head = node;
	}
	else
	{
		if (temp->next == NULL)
			node = temp->next;
		else
			node = temp->next->next;
		free(temp->next);
		temp->next = node;
	}
	return (1);
}
