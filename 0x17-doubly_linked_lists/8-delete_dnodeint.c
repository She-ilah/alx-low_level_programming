#include "lists.h"

/**
 * delete_dnodeint_at_index - Function deletes node at index
 * @head: head.
 * @index: index.
 * Return: 1 upon success or -1 upon failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *first_h;
	dlistint_t *second_h;
	unsigned int i;

	first_h = *head;

	if (first_h != NULL)
		while (first_h->prev != NULL)
			first_h = first_h->prev;

	i = 0;

	while (first_h != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = first_h->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				second_h->next = first_h->next;

				if (first_h->next != NULL)
					first_h->next->prev = second_h;
			}

			free(first_h);
			return (1);
		}
		second_h = first_h;
		first_h = first_h->next;
		i++;
	}
	return (-1);
}
