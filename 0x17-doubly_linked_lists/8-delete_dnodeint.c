#include "lists.h"

/**
 * delte_dnodeint_at_index - deletes the node at index of a linked list.
 *
 * @head: head of the list
 * @index: index of the new node.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr1;
	dlistint_t *ptr2;
	unsigned int count;

	ptr1 = *head;

	if (ptr1 != NULL)
		while (ptr1->prev != NULL)
			ptr1 = ptr1->prev;

	count = 0;

	while (ptr1 != NULL)
	{
		if (count == index)
		{
			if (count == 0)
			{
				*head = ptr1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				ptr2->next = ptr1->next;

				if (ptr1->next != NULL)
					ptr1->next->prev = ptr2
			}

			free(ptr1);
			return (1);
		}
		ptr2 = ptr1;
		ptr1 = ptr1->next;
		count++;
	}

	return (-1);
}
