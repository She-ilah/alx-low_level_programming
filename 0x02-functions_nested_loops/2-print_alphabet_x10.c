#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * description - program prints the alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)

{
	int a = 0, b;

	while (a < 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}

		_putchar('\n');
		a++;

	}
}
