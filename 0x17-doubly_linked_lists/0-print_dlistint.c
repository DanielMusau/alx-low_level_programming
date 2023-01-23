#include "lists.h"

/**
 * print_dlistint: Prints all the element of a dlist.
 * @h: head of the list.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int counter;

	counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
