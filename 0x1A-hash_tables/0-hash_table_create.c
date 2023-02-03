#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array
 *
 * Return: apointer to the newly created hash table
 * else NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	table->size = size;
	table->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * table->size);

	return (table);
}
