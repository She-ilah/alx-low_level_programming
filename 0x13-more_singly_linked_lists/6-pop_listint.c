#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * pop_listint - function deletes the head node of a linked list.
 * @head: pointer to pointer to list
 *
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (data);
}
