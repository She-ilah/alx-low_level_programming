#include "lists.h"

/**
 * *get_dnodeint_at_index - Function returns nth node of linked list.
 * @head: head.
 * @index: index.
 * Return: nth node or NULL upon failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (index == size)
		return (temp);
		size++;
		temp = temp->next;
	}
	return (NULL);
}
