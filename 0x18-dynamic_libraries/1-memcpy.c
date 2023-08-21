#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area to be copied to.
 * @src: memory area to copy
 * @n: number of bytes
 * Return: char, pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int len;

        for (len = 0; len < n; len++)
        {
                dest[len] = src[len];
        }
        return (dest);
}
