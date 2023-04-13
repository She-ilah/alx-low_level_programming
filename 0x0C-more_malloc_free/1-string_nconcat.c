#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: size of bytes
 * Return: pointer with newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a = 0, b = 0, c = 0, m = 0;

	while (s1 && s1[c])
		c++;
	while (s2 && s2[m])
		m++;

	if (n < m)
		ptr = malloc(sizeof(char) * (c + n + 1));
	else
		ptr = malloc(sizeof(char) * (c + m + 1));

	if (!ptr)
		return (NULL);

	while (a < c)
	{
		ptr[a] = s1[a];
		a++;
	}
	while (n < m && a < (c + n))
		ptr[a++] = s2[b++];
	while (n >= m && (c + m))
		ptr[a++] = s2[b++];

	ptr[a] = '\0';
	return (ptr);
}
