#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a = 0, b;

	while (a < 10)
	{
		b = 97;
		while (b < 123)
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
