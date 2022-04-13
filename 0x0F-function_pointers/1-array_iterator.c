#include "function_pointers.h"

/**
 * array_iterator - Iterarates through an array.
 * @array: The array.
 * @size: The size of the array.
 * @action: pointer to the function to use.
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
