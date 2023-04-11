#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * Return: char, pointer that stores concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int len;
	int n;
	char *app;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = 0;
	n = 0;
	while (s1[len] != '\0')
		len++;
	while (s2[n] != '\0')
		n++;

	app = malloc(sizeof(char) * (len + n + 1));

	if (app == NULL)
	{
		return (NULL);
	}
	len = 0;
	n = 0;
	while (s1[len] != '\0')
	{
		app[len] = s1[len];
		len++;
	}
	while (s2[n] != '\0')
	{
		app[len] = s2[n];
		len++;
		n++;
	}
	app[len] = '\0';
	return (app);
}
