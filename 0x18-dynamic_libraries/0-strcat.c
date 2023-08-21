#include "main.h"

/**
 * *_strcat - function concatenates two strings
 * @dest: string to be added to
 * @src: string to be added
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
        int len = 0, a;

        while (dest[len] != '\0')
        {
                len++;
        }
        for (a = 0; src[a] != '\0'; a++)
        {
                dest[len] = src[a];
                len++;
        }
        dest[len] = '\0';
        return (dest);
}
