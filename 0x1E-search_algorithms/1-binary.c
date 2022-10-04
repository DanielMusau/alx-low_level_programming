#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted
 * array of integers using Binary search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of element in array.
 * @value: value to search for.
 *
 * Return: index where value is located otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;

	while (left < right)
	{
		printf("Searching in array: ");

		mid = (left + right) / 2;

		if (value == array[mid])
			printf("%d", array[mid])
			return mid;
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("\n");
	}
	return (-1);
}
