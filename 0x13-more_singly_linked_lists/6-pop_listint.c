#include "lists.h"

/**
 * pop_listint - Deletes the head node of list.
 * @head: pointer to the node at the beginning.
 *
 * Return: head node's data (n) or 0 if linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *ptr;

	ptr = *head;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		ptr = ptr->next;
		free(temp);
	}

	return (ptr->n);
}
