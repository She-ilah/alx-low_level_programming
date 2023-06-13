#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: First string in concatenation
 * @s2: Second string in concatenation
 * Return: pointer to the concatenated string or NULL upon failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, n, len1, len2;
	int a, b = 0;

	/* If strings are NULL treat them as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Code determines the length of s1 and s2 */
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (n = 0; s2[n] != '\0'; n++)
		len2++;

	/* Allocates memory for the concatenated string */
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (new_str == NULL)
		return (NULL);

	/* While loops concatenate the strings and stores them in new_str*/
	a = b = 0;
	while (s1[a] != '\0')
	{
		new_str[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		new_str[a] = s2[b];
		b++;
		a++;
	}
	new_str[a] = '\0';

	return (new_str);
}

