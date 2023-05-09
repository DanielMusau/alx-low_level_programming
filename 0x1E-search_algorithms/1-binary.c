#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of
 * integers using the Binaary search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: index where value is located or -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t median, i;
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		median = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[median] < value)
			low = median + 1;
		else
			high = median - 1;

		if (low != size && array[low] == value)
			return (low);
	}
	return (-1);
}
