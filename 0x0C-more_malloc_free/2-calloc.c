#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array.
 * @nmemb: Number of elements in array.
 * @size: amount of bytes.
 *
 * Return: NULL if nmemb or size is 0, otherwise
 * pointer to memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (j = 0; j < (nmemb * size); j++)
		arr[j] = 0;

	return (arr);
}
