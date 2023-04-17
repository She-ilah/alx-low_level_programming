#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - determines the length string
 * @s: string, length to be determined
 * Return: int, string length
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * *_strcpy - copies the allocated string
 * @dest: string to copy
 * @src: string to be copied
 * Return: char, pointer to copied string
 */
char *_strcpy(char *dest, char *src)
{
	int len, n;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (n = 0; n < len; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}

/**
 * new_dog - function creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int a, b;

	a = _strlen(name);
	b = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (a + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (b + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
