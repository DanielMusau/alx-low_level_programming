#include "lists.h"

/**
 * pop_listint - Deletes the head node of list.
 * @head: pointer to the node at the beginning.
 *
 * Return: head node's data (n) or 0 if linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		n = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	return (n);

}
