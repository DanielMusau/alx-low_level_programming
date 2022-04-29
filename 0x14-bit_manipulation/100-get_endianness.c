#include "main.h"

/**
 * get_endianness - checks the endiannes.
 *
 * Return: 0 if big endian or 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *) &i;

	return ((int)*c);
}
