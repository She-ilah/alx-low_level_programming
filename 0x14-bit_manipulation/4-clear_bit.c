#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0
 * @n: number to be altered
 * @index: index
 * Return: 1 for success or -1 upon for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

