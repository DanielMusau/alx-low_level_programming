#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of comand line arguments.
 * @argv: Array of command line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
