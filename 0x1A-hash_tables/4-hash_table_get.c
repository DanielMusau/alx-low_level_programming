#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: pointer to the hash table.
 * @key: key of the hash.
 * Return: value of the hash.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index_k;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	index_k = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index_k];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
