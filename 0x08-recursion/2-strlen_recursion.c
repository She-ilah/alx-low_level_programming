#include "main.h"

/**
 * _strlen_recursion - Function returns the length of a string
 * @s: String of which length is to be determined
 * Return: int, length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
