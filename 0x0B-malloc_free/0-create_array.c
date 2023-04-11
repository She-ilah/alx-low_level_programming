#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: number of buytes
 * @c: char that initializes array
 * Return: char, pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int n;

	ar = malloc(sizeof(char) * size);

	if (size == 0 || ar == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		ar[n] = c;
	}
	return (ar);
}
