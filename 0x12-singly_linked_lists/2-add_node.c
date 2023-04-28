#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * *add_node - function adds a new node at the start of list_t
 * @head: pointer to pointer of list_t
 * @str: string to add at the start of list_t
 * Return: list_t, Address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *appended;
	unsigned int len = 0;

	while (str[len])
		len++;

	appended = malloc(sizeof(list_t));
	if (!appended)
		return (NULL);

	appended->str = strdup(str);
	appended->len = len;
	appended->next = (*head);
	(*head) = appended;

	return (*head);
}
