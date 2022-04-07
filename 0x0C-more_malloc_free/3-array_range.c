#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: Minimum value integer.
 * @max: Maximum value integer.
 *
 * Return: NULL if min > max.
 * if malloc fails, NULL.
 * Otherwise pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	char *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; min++)
		arr[i] = min;

	return (arr);
}
