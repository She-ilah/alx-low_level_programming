#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints all the arguments it receives.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
