#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers followed by a new line.
 * @argc: Number of comand line arguments.
 * @argv: Arrays of comandline arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int count, j, sum = 0;

	for (count = 1; count < argc; count++)
	{
		for (j = 0; argv[count][j] != '\0'; j++)
		{
			if (!isdigit(argv[count][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
