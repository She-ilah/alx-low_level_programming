#include "main.h"

/**
 * _print_rev_recursion - Function prints a string reverse
 * @s: String to be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* if statement to keep the string going*/
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
