#include"lists.h"

/**
 * *add_dnodeint - Adds a new node at beggining of linked list
 * @head: head of the node
 * @n: node to be added
 * Return: Address of new element or NULL upon failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;
	dlistint_t *h;

	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	new_head->next = h;

	if (h != NULL)
		h->prev = new_head;

	*head = new_head;
	return (new_head);
}
