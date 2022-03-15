#include "main.h"

/**
 * print_last_digit - Prints the last digit.
 *
 * @n: input number as an integer
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (k < 0)
	{
		_putchar(-k + 48);
		return (-k);
	}
	else
	{
		_putchar(k + 48);
		return (k);
	}
}
