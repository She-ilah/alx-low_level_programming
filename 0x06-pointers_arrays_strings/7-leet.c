#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: string to be replaced by numbers
 * Return: char
 */
char *leet(char *str)
{
	int a, b;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (a = 0; str[a] != '\0'; a++)
	{
	for (b = 0; b < 10; b++)
	{
	if (str[a] == str1[b])
	{
		str[a] = str2[b];
	}
	}
	}
	return (str);
}
