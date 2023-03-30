#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @str: string to be encoded
 * Return: char, encoded string
 */
char *rot13(char *str)
{
	int a, b;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpharot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
	for (b = 0; b < 52; b++)
	{
	if (str[a] == alpha[b])
	{
		str[a] = alpharot[b];
		break;
	}
	}
	}
	return (str);
}
