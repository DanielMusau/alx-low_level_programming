#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: Number of times the character _ is printed.
 *
 * Return: no return.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
