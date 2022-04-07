#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: amount of bytes.
 *
 * Return: Null if the function fails otherwise
 * pointer shall point to a newly allocated space
 * in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int ls1, ls2, larr, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;
	for (ls2 = 0; s1[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	larr = ls1 + n;

	arr = malloc(larr + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < larr; i++)
		if (i < ls1)
			arr[i] = s1[i];
		else
			arr[i] = s2[i - ls1];

	arr[i] = '\0';

	return (arr);

}
