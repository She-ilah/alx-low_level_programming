#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: consists of a certain number of bytes
 * Return: unsigned int, number of bytes in intial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int a = 0;
        int len;

        while (*s)
        {
        for (len = 0; accept[len]; len++)
        {
        if (*s == accept[len])
        {
                a++;
                break;
        }
        else
        if (accept[len + 1] == '\0')
        return (a);
        }
                s++;
        }
        return (a);
}

