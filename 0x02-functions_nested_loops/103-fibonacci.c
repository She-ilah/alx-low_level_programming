#include <stdio.h>

/**
 * main - prints the sum of even-valued terms
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	long m = 1, p = 2, sum = p;

	while (p + m < 4000000)
	{
	p += m;
	if (p % 2 == 0)
	sum += p;
	m = p - m;
	++n;
	}
	printf("%ld\n", sum);
	return (0);
}
