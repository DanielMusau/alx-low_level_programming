#include "search_algos.h"

/**
 * binary_search - used to find the location of the value.
 *
 * @array: array to be searched in.
 * @size: size of the array to be searched.
 * @value: what needs to be found.
 *
 * Return: value index or -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t mid;
	size_t low = 0;
	size_t high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);

			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using Exponential search algorithm.
 *
 * @array: pointer to the first element of the array to search.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: value location or -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t range = 1;
	size_t low, high;

	if (array == NULL)
	{
		return (-1);
	}

	if (array[0] == value)
	{
		return (0);
	}

	while (range < size && array[range] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", range, array[range]);
		range *= 2;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			range / 2, (range < size) ? range : size - 1);

	low = range / 2;
	high = (range < size) ? range : size - 1;

	return (binary_search(array + low, high - low + 1, value) + low);
}
