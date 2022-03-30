#include "main.h"

/**
 * factorial - Return the factorial of a given number.
 * @n: Input number.
 *
 * Return: -1 if n is lower than 0, 1 if n is 0
 * and factorial if n is greater than 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
