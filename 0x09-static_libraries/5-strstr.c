#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack:string to be searched
 * @needle: string that symbolizes the first occurance of substring
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = needle;
		char *m = haystack;

	while (*m == *n && *n != '\0')
	{
		m++;
		n++;
	}
	if (*n == '\0')
	{
	return (haystack);
	}
	}
	return (0);
}

