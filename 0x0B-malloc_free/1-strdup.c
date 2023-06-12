#include "main.h"

/**
 * *_strdup - function returns a point to a newly allocated space in memory
 * @str: original string
 * Return: pointer to the newly allocated string
 */
char *_strdup(char *str)
{
	char *s;
	int i, n, len;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	{
		len++;
	}

	s = malloc(sizeof(char) * (len + 1));

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);


}
