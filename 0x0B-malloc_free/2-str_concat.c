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
	int len1, len2;

	/* If strings are NULL treat them as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Code determines the length of s1 and s2 */
	len1 = len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Allocates memory for the concatenated string */
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (new_str == NULL)
		return (NULL);

	/* While loops concatenate the strings and stores them in new_str*/
	len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		new_str[len1] = s1[len1];
		len1++;
	}
	while (s2[len2] != '\0')
	{
		new_str[len1] = s2[len2];
		len2++;
		len1++;
	}
	new_str[len1] = '\0';

	return (new_str);
}

