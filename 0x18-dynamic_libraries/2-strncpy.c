#include "main.h"

/**
 * *_strncpy - function copies a string
 * @dest: destination string
 * @src: source string
 * @n: 3rd parameter
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
        int a;

        a = 0;

        while (a < n && src[a] != '\0')
        {
                dest[a] = src[a];
                a++;
        }
        while (a < n)
        {
        dest[a] = '\0';
        a++;
        }
        return (dest);
}
