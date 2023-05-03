#include "lists.h"
#include <stddef.h>

/**
 * *reverse_listint - function reverses a linked list
 * @head: pointer to pointer to list
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *start, *finish;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	finish = NULL;

	while ((*head)->next != NULL)
	{
		start = (*head)->next;
		(*head)->next = finish;
		finish = *head;
		*head = start;
	}
	(*head)->next = finish;
	return (*head);
}
