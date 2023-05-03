#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *add_nodeint - adds a new node at the beginning of a list.
 * @head: pointer to pointer to list.
 * @n: integer
 *
 * Return: Adress of the new element or NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (!NewNode)
		return (NULL);

	NewNode->n = n;
	NewNode->next = *head;
	*head = NewNode;

	return (NewNode);
}
