#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program adds positive numbers
 * @argc: Argument count
 * @argv: Argument vectors
 * Return: int or 1 upon failure
 */
int main(int argc, char *argv[])
{
	unsigned int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= '0' && atoi(argv[i]) <= '9')
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}

