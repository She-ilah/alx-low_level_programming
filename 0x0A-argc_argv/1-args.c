#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function prints the number of arguments passed to it.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
