#include "main.h"

/**
 * get_bit - function returns value of a bit at a given index.
 * @n: number to be examined
 * @index: index
 * Return: value of the bit or -1 upon failure.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
	{
		return (-1);
	}
	value = (n >> index) & 1;
	return (value);
}

