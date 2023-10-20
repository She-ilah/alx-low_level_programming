#include "main.h"

/**
 * *_strncat - cocatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: certain number of bytes
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, a;

	while (dest[len] != '\0')
	{
		len++;
	}
	a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[len] = src[a];
		a++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
