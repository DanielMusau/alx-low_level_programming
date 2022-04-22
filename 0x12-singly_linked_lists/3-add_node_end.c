#include "lists.h"
int len(const char *str);
list_t *create_node(const char *str);

/**
 * *add_node_end - Adds a new node at the end of the list.
 * @head: beginning of the list.
 * @str: String.
 *
 * Return: Addres of the new element or NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	
	temp = *head;

	if (head == NULL)
		return (NULL);
	new_node = create_node(str);

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (*head);
}

/**
 * len - Calculates the length of teh string.
 * @str: string.
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
/**
 * create_node - Creates a new node
 * @str: String to add to the node.
 * Return: A pointer to the allocated memory.
 */
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;

	return (new_node);
}
