#include <stdio.h>

/**
 * main - Print Alphabets in lowercase and uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;

	for (n = 0; n < 52; n++)
	{
		putchar(alph[n]);
	}
	putchar('\n');
	return (0);
}
