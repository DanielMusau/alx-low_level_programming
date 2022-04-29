#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number to be converted.
 * @index: is the index starting from 0.
 *
 * Return: the value of the bit at index or -1 if an error occcured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
