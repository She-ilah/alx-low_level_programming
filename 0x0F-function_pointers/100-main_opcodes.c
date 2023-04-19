#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point to funtion
 * @argv: array of arguments
 * @argc: number of arguments in the array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int size, n;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (n = 0; n < size; n++)
	{
		if (n == size - 1)
		{
			printf("%02hhx\n", arr[n]);
			break;
		}
		printf("%02hhx", arr[n]);
	}
	return (0);
}
