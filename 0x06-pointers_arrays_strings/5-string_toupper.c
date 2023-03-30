#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @p: pointer to the string
 * Return: char
 */
char *string_toupper(char *p)
{
	int n;

	for (n = 0; p[n] != '\0'; n++)
	{
		if (p[n] >= 'a' && p[n] <= 'z')
		{
			p[n] = p[n] - 32;
		}
	}
	return (p);
}
