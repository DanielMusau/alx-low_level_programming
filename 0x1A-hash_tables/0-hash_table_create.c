#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: is the size of the array.
 *
 * Return: a pointer to the newly created hash table otherwise NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;

	hash_table_t *hash_t = malloc(sizeof(hash_table_t));

	if (hash_t == NULL)
		return (NULL);

	hash_t->array = malloc(sizeof(hash_node_t*) * size);

	for(i = 0; i < size; ++i)
	{
		hash_t->array[i] = NULL;
	}

	return (hash_t);
}
