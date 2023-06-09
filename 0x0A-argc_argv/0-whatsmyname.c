#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Program that prints its name
 * @argc: Argument count
 * @argv: Argument vectors
 * Return: int
 */
int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
