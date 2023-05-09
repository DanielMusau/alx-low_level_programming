#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of
 * integers using the Jump search algorithm.
 *
 * @array: Pointer to the first element of array.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: Index of value or -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t block_size = sqrt(size);
	size_t start = 0;
	size_t end = block_size;
	size_t i;

	if (array == NULL)
		return (-1);

	while (array[end] <= value && end < size)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end += block_size;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	for (i = start; i < end && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
