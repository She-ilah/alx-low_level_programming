#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	long m = 1, p = 2;

	while (n < 50)
	{
	if (n == 0)
	printf("%ld", m);
	else
	if (n == 1)
		printf(", %ld", p);
	else
	{
	p += m;
	m = p - m;
	printf(", %ld", p);
	}
	++n;
	}
	printf("\n");
	return (0);
}
