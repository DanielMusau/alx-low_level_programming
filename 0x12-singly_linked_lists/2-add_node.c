#include "lists.h"
int len(const char *str);

/**
 * *add_node - adds a new node at the beginning of the list.
 * @head: Beginning of the list.
 * @str: String.
 *
 * Return: Address of the new element or NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr; 
       
	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	if (*head == NULL)
		ptr->next = NULL;
	else
		ptr->next = *head;
	ptr->str = strdup(str);
	ptr->len = len(str);
	*head = ptr;

	return (*head);
}

/**
 * len - calculates the length of a string.
 * @str: string.
 *
 * Return: The length of the string.
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
