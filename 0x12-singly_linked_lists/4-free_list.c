#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 * @head: pointer to list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *prov;

	while (head)
	{
		prov = head->next;
		free(head->str);
		free(head);
		head = prov;
	}
}
