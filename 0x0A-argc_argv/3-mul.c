#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers
 * @argc: Argument count
 * @argv: Argument Vectors
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
