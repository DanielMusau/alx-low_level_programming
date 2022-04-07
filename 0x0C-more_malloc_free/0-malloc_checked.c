#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Allocate memory using malloc.
 * @b: Amount of bytes.
 *
 * Return: Pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
