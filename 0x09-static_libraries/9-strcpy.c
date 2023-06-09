#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: points to a buffer
 * @src: points to string to be copied
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int m = 0;

	while (*(src + n) != '\0')
	{
		n++;
	}
	for (; m < n; m++)
	{
		dest[m] = src[m];
	}
	dest[n] = '\0';

	return (dest);
}

