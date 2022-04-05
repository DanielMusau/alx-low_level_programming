#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars.
 * @size: size of array.
 * @c: Character.
 *
 * Return: Null if size is 0 or it fails otherwise
 * a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(c));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
