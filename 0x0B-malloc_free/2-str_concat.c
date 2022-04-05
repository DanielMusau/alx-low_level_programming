#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: NULL on failure otherwise contents of s1
 * followed by contents of s2.
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	arr = malloc(sizeof(char) * (i + j + 1));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		arr[k] = s1[k];

	limit = j;

	for (j = 0; j <= limit; k++, j++)
		arr[k] = s2[j];

	return (arr);
}
