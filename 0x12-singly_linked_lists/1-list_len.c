#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - function returns the number of elements in l-list.
 * @h: pointer to linked list_t list
 * Return: size_t, number of elements in l-list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
