#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * of integers using the Linear search algorithm.
 *
 * @array: pointer to the first element of the array.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: Index where value is located otherwise returns
 * -1 if value is ot present or array is null.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	if (array == NULL || i == size)
		return (-1);

	return (0);
}
