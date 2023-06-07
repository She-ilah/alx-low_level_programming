#include "main.h"

/**
 * _puts_recursion - funtion prints a string
 * @s: String to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	/* if statement keeps the string going */
	if (*s)
	{
		_putchar(*s);/* only allows for one character*/
		_puts_recursion(s + 1);/*Recursive statement, prints all other characters*/
	}
	else
		_putchar('\n');
}
