#include "main.h"

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: certain number of bytes in string
 * Return: char, pointer to byte s or null.
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
	for (a = 0; accept[a]; a++)
	{
	if (*s == accept[a])
	{
		return (s);
	}
	}
		s++;
	}
	return ('\0');
}

