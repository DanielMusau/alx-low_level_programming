#include "lists.h"

/**
 * free_listint2 - frees a linked list.
 * @head: pointer to the beginning of the node.
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *aux;

	ptr = *head;

	while (ptr != NULL)
	{
		aux = ptr;
		ptr = ptr->next;
		free(aux);
	}

	free(*head);
	*head = NULL;
}
