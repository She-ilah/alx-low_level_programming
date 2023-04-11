#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: char, pointer of duplicated string
 */
char *_strdup(char *str)
{
	char *cpy;
	int n;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n]; n++)
	{
		cpy[n] = str[n];
	}
	return (cpy);
}
