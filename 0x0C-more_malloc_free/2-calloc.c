#include <stdlib.h>
#include "main.h"

char *_memset(char *mem, char a, unsigned int n);

/**
 * *_memset - Function fills memory area.
 * @mem: memory area.
 * @a: char to be copied n number of times.
 * @n: copy indicator
 * Return: pointer to the memory area.
 */
char *_memset(char *mem, char a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		mem[i] = a;
	}
	return (mem);
}

/**
 * *_calloc - Function allocates memory for an array
 * @nmemb: element in array.
 * @size: size in bytes
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

