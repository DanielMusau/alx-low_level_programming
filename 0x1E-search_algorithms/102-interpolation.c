#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: index of where value is located or -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;
	size_t comparisons = 1;
	int index = -1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		pos = low + ((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]);
		comparisons++;

		if (pos >= size)
			break;

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			index = (int)pos;
			break;
		}
		else if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}

	if (index == -1)
		printf("Value checked array[%ld] is out of range\n", pos);
	return (index);
}
