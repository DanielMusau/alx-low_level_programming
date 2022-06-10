#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given position.
 * @h: Head of the list
 * @idx: is the index of the list where the new node should be added.
 * @n: data to be stored in node.
 *
 * Return: The address of the new node or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *ptr;
	unsigned int count;

	temp = NULL;
	if (idx == 0)
		temp = add_dnodeint(h, n);
	else
	{
		ptr = *h;
		count = 1;
		if (ptr != NULL)
			while (ptr->prev != NULL)
				ptr = ptr->prev;
		while (ptr != NULL)
		{
			if (count == idx)
			{
				if (ptr->next == NULL)
					temp = add_dnodeint_end(h, n);
				else
				{
					temp = malloc(sizeof(dlistint_t));
					if (temp != NULL)
					{
						temp->n = n;
						temp->next = ptr->next;
						temp->prev = ptr;
						ptr->next->prev = temp;
						ptr->next = temp;
					}
				}
				break;
			}
			ptr = ptr->next;
			count++;
		}
	}

	return (temp);
}
