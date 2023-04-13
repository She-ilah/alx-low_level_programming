#include "main.h"
#include <stdlib.h>

/**
 * *_set - fills the allocated memory
 * @n: memory
 * @a: character to be copied
 * @b: a to be copied b times
 * Return: pointer to the allocated memory
 */
char *_set(char *n, char a, unsigned int b)
{
	unsigned int len;

	for (len = 0; len < b; len++)
		n[len] = a;
	return (n);
}
/**
 * *_calloc - allocates memory for an array
 * @nmemb: certain number of elements
 * @size: size of array
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_set(ptr, 0, nmemb * size);
	return (ptr);
}
