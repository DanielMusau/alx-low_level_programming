#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies 2 numbers.
 * @argc: Number of comand line arguments.
 * @argv: Array of command line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
