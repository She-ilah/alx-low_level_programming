#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int n = 0;
	int m = 0;
	char *x = str;
	int y;

	while (*x != '\0')
	{
		x++;
		n++;
	}
	m = n - 1;
	for (y = 0; y <= m; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
