#include "main.h"

/**
 * print_diagonal - draws a diagnol line on the terminal
 * @n: the number of times '\' should be printed.
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, p;

		for (m = 0; m < n; m++)
		{
		for (p = 0; p < n; p++)
		{
			if (p == m)
			_putchar('\\');

			else if (p < m)
			_putchar(' ');
		}
		_putchar('\n');
	}
	}
}
