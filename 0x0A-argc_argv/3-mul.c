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
	int count, mul = 1;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			mul = mul * atoi(argv[count]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
