#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: Number of arguments passed on the commandline.
 * @argv: array of strings that contain the arguments passed on
 * the comand line.
 * Return: 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
