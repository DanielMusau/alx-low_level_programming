#include "lists.h"

/**
 * dlistint_len - Returns the number of elements.
 * @h: Head of the doubly linked list.
 *
 * Return: Number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
