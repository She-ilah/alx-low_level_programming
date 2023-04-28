#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - fuction prints elements of a list_t list
 * @h: pointer to list_h
 * Return: size_t, the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h -> len, h -> str);
		}
		h = h -> next;
		n++;
	}
	return (n);
}