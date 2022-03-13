#include <stdio.h>

/**
 * main - Print the alphabet except letter q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[24] = "abcdfghijklmnoprstuvwxyz";
	int n;

	for (n = 0; n < 24; n++)
	{
		putchar(alph[n]);
	}
	putchar('\n');
	return (0);
}
