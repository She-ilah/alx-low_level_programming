#include "main.h"

/**
 * _islower - checks for lowercase characters
 * description - program identifies lowercase characters
 * @c: The character that needs to be checked
 *Return: int
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
