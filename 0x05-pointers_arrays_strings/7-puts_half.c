#include "main.h"

/**
 * puts_half - prints last half of the string
 * @str: string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int n, m, a;

	a = 0;

	for (n = 0; str[n] != '\0'; n++)
		a++;

	m = (a / 2);

	if ((a % 2) == 1)
		m = ((a + 1) / 2);

	for (n = m; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
