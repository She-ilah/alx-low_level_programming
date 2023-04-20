#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: lists types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *space = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", space, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", space, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", space, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", space, str);
					break;
				default:
					i++;
					continue;
			}
			space = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
