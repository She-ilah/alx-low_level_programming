#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *add_nodeint_end - adds a new node to the end of a list
 * @head: pointer to pointer to list
 * @n: integer
 *
 * Return: address of the new element or Null if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode;
	listint_t *temp;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->n = n;
	NewNode->next = NULL;

	if (*head == NULL)
	{
		*head = NewNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = NewNode;
	}
	return (*head);

}
