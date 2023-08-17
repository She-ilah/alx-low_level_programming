#include "lists.h"

/**
 * print_dlistint - Function prints all the elements of a list
 * @h: pointer to list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num_nodes = 0;

	if (h == NULL)
		return (num_nodes);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
