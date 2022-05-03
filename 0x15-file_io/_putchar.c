#include <unistd.h>

/**
 * _putchar - Writes character to stdout.
 * @c: Character to be printed.
 *
 * Return: On success 1, or error -1 and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
