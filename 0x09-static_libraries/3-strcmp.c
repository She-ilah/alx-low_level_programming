#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1: parameter to be compared
 * @s2: parameter to be compared
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (s1[n] != '\0' && s2[n] != '\0')
	{
		if (s1[n] != s2[n])
		{
			return (s1[n] - s2[n]);
		}
		n++;
	}
	return (0);
}

