#include "main.h"

/**
 * _isdigit - Checks if parameter is a number between 0 to 9.
 *  @c: input number.
 *
 *  Return: 1 if c is a digit and 0 if otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
