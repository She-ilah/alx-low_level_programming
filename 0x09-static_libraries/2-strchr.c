#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to be located
 * Return: pointer to the character or null.
 */
char *_strchr(char *s, char c)
{
	int len;

	for (len = 0; s[len] >= '\0'; len++)
	{
	if (s[len] == c)
		return (&s[len]);
	}
	return (0);
}

