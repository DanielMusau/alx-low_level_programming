#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index.
 * @n: integer to be converted.
 * @index: index starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, or -1 if an error orccured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
