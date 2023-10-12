#include "lists.h"

/**
 * dlistint_len - Returns number of elements in linked list
 * @h: pointer to the linked list
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num_nodes = 0;

	if (h == NULL)
		return (num_nodes);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
