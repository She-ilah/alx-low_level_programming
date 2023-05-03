#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *get_nodeint_at_index - function returns the nth node of a linked list
 * @head: pointer to the linked list
 * @index: index of the node, starting at 0
 *
 * Return: nth node or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head == NULL)
			return (NULL);
		count++;
		head = head->next;
	}
	return (head);
}
