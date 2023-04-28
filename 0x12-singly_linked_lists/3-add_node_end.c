#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - functions adds new node to the end of list_t
 * @head: pointer to pointer of list_t
 * @str: pointer to list_t
 * Return: list_t, address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *appended;
	list_t *prov = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	appended = malloc(sizeof(list_t));
	if (!appended)
		return (NULL);

	appended->str = strdup(str);
	appended->len = len;
	appended->next = NULL;

	if (*head == NULL)
	{
		*head = appended;
		return (appended);
	}
	while (prov->next)
		prov = prov->next;

	prov->next = appended;
	return (appended);
}
