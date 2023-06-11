#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int is_num(char *str);

/**
 * is_num - Verifies that given string contains only integers
 * @str: String to be checked
 * Return: Always 0
 */
int is_num(char *str)
{
	unsigned int num = 0;

	while (num < strlen(str))
	{
		if (!isdigit(str[num]))
		{
			return (0);
		}
		num++;
	}
	return (1);
}

/**
 * main - Program adds positive numbers
 * @argc: Argument count
 * @argv: Argument vectors
 * Return: int or 1 upon failure
 */
int main(int argc, char *argv[])
{
	int num;
	int str;
	int sum = 0;

	num = 1;
	while (num < argc)
	{
		if (is_num(argv[num]))
		{
			str = atoi(argv[num]);
			sum += str;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		num++;
	}
	printf("%d\n", sum);

	return (0);
}
