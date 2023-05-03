#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - function frees a listint_t list
 * @head: pointer to listint_t list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
