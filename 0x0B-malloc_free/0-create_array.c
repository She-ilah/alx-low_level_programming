#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Function creates an array of chars
 * @size: Number of bytes we need to allocate
 * @c: char that will initialize the array
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
