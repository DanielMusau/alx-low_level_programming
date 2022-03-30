#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of
 * a number.
 * @n: input number.
 *
 * Return: natural square root or -1 if n does not have
 * a natural square root.
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 0;

	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_helper(n, i + 1));
}

/**
 * sqrt_helper - recursive square root function helper.
 *
 * @n: number to calculate the square root of.
 * @i: increment counter.
 *
 * Return: Natural square root of n.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (sqrt_helper(n, i + 1));
	return (-1);
}
