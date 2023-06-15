#include "main.h"
#include "stddef.h"
#include "stdlib.h"

/**
 * *malloc_checked - function allocates memory using malloc.
 * @b: pointer, size
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *func;

	func = malloc(b);

	if (func == NULL)
		exit(98);

	return (func);
}
