#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Function prints strings
 * @separator: String to be printed between strings
 * @n: Argument count
 * Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *str;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
		else
		printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
