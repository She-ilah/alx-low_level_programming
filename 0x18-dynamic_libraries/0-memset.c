#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer, points to a memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: char, a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len;

	for (len = 0; len < n; len++)
	{
		s[len] = b;
	}
	return (s);
}
