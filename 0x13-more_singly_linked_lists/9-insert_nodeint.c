#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *insert_nodeint_at_index - inserts a node at a given position.
 * @head: pointer to pointer to list
 * @idx: the index at which the new node should be added
 * @n: data of list
 *
 * Return: address of new node or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *NewNode;
	unsigned int data;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->n = n;

	if (idx == 0)
	{
		NewNode->next = temp;
		*head = NewNode;
		return (NewNode);
	}
	for (data = 0; data < (idx - 1); data++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}
	NewNode->next = temp->next;
	temp->next = NewNode;
	return (NewNode);
}
