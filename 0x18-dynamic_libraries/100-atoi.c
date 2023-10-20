#include "main.h"

/**
 * _atoi - function converts a string to an integer
 * @s: string to be converted
 * Return: int, integer
 */
int _atoi(char *s)
{
	int sign = 1, n = 0;
	unsigned int ans = 0;

	while (!(s[n] <= '9' && s[n] >= '0') && s[n] != '\0')
	{
		if (s[n] == '-')
			sign *= -1;
		n++;
	}
	while (s[n] <= '9' && (s[n] >= '0' && s[n] != '\0'))
	{
		ans = (ans * 10) + (s[n] - '0');
		n++;
	}
	ans *= sign;
	return (ans);
}
