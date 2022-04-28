#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: 0 if there is one or more chars in the string b
 * that is not 0 or 1 or b is NULL otherwise return the
 * converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, j;
	unsigned int total = 0;
	unsigned int decval = 1;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return ((b[0] - 48));
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		for (j = len - 1; j > 0; j--)
			decval = decval * 2;
		total = total + (decval * (b[i] - 48));
		len--;
		decval = 1;
	}

	return (total);
}
