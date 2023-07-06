#include "main.h"

/**
 * binary_to_uint - function converts binary number to unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number or 0 upon failure
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		result = 2 * result + (b[n] - '0');
	}
	return (result);
}

