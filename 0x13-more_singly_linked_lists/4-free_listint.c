#include "lists.h"

/**
 * free_listint - Frees a list.
 * @head: beginning of the list.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr, *aux;

	ptr = head;

	while (ptr != NULL)
	{
		aux = ptr;
		ptr = ptr->next;
		free(aux);
	}
}
