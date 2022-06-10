#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a linked list.
 * @head: start of the list.
 *
 * Return: sum or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	
	if (head == NULL)
		return (0);

	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
