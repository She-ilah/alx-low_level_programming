#include "lists.h"

/**
 * *add_dnodeint_end - Function adds new node at end of list.
 * @head: head of the node
 * @n: node to be added
 * Return: Address of the new element or NULL upon failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_head;
	dlistint_t *h;

	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_head;
	}
	else
	{
		*head = new_head;
	}
	new_head->prev = h;

	return (new_head);
}
