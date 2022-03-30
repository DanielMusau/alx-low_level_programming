#include "main.h"

/**
 * is_prime_helper - checks if a number is a prime number
 * or not.
 * @n: input number.
 * @index: iterator.
 *
 * Return: 1 if prime number or otherwise 0.
 */
int is_prime_helper(int n, int index)
{
	if (n % index == 0)
	{
		if (n == index)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime_helper(n, index + 1));
}

/**
 * is_prime_number - checks if a number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number or otherwise 0.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime_helper(n, 2));
}
