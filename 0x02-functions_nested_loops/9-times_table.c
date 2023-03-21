#include "main.h"

/**
 * times_table - prints the times table
 * description - program prints the 9 times table
 */
void times_table(void)
{
	int n, a, b;

	for (n = 0; n < 10; n++)
	{
	for (a = 0; a < 10; a++)
	{
		b = n * a;
		if (a == 0)
		{
			_putchar(b = '0');
		}
		if (b < 10 && a != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(b + '0');
		}
		else
		if (b >= 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
	}
	_putchar('\n');

	}
}
