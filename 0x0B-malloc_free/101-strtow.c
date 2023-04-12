#include "main.h"
#include <stdlib.h>

/**
 * total_words - counts the total amount of words in a string
 * @n: string to be counted
 * Return: int, total number of words
 */
int total_words(char *n)
{
	int po1, a, b;

	po1 = 0;
	b = 0;

	for (a = 0; n[a] != '\0'; a++)
	{
	if (n[a] == ' ')
		po1 = 0;
	else if (po1 == 0)
	{
		po1 = 1;
		b++;
	}
	}
	return (b);
}
/**
 * **strtow - function splits a string into words
 * @str: string to be seperated
 * Return: char, pointer to an array of strings
 */
char **strtow(char *str)
{
	char **two;
	char *one;
	int n;
	int sen, p1, p2;
	int a = 0, b = 0, c = 0;

	while (*(str + a))
		a++;
	sen = total_words(str);

	if (sen == 0)
		return (NULL);
	two = (char **) malloc(sizeof(char *) * (sen + 1));

	if (two == NULL)
		return (NULL);

	for (n = 0; n <= a; n++)
	{
	if (str[n] == ' ' || str[n] == '\0')
	{
	if (c)
	{
		p2 = n;
		one = (char *) malloc(sizeof(char) * (c + 1));
	if (one == NULL)
		return (NULL);
	while (p1 < p2)
		*one++ = str[p1++];
	*one = '\0';
	two[b] = one - c;
	b++;
	c = 0;
	}
	}
	else if (c++ == 0)
		p1 = n;
	}
	two[b] = NULL;
	return (two);
}
