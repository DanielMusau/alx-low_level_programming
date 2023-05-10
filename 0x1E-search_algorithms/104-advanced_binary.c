#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of
 * integers.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1 if not found or
 * array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t mid;
	int res;

	if (array == NULL || size == 0)
		return (-1);

	if (size == 1)
	{
		if (*array == value)
			return (0);
		else
			return (-1);
	}

	printf("Searching in array: ");

	print_array(array, size);

	mid = (size - 1) / 2;

	if (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
			return (advanced_binary(array, mid + 1, value));
		else
			return (mid);
	}
	else if (array[mid] < value)
	{
		res = advanced_binary(&array[mid + 1], size - mid - 1, value);
		if (res == -1)
			return (-1);
		else
			return (mid + 1 + res);
	}
	else
	{
		return (advanced_binary(array, mid + 1, value));
	}
}

/**
 * print_array - prints an array of integers.
 * @array: pointer to the first element of the array to print.
 * @size: Number of elements in array.
 */
void print_array(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i != size - 1)
			printf(", ");
	}
	printf("\n");
}
