#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - function concatenates all arguments of a program
 * @ac: integer
 * @av: pointer to array
 * Return: char, pointer to new concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *app;
	int n;
	int m;
	int a = 0;
	int b = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m]; m++)
		b++;
	}
	b += ac;

	app = malloc(sizeof(char) * b + 1);

	if (app == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < ac; n++)
	{
	for (m = 0; av[n][m]; m++)
	{
		app[a] = av[n][m];
		a++;
	}
	if (app[a] == '\0')
	{
		app[a++] = '\n';
	}
	}
	return (app);
}
