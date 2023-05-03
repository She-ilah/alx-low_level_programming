#include "lists.h"
#include <stddef.h>

/**
 * *find_listint_loop - function finds the loop in a linked list
 * @head: pointer to the linked list
 *
 * Return: address of the node where the loop starts or NULL upon failure
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start, *finish;

	if (head == NULL || head->next == NULL)
		return (NULL);

	start = head->next;
	finish = (head->next)->next;

	while (finish)
	{
		if (start == finish)
		{
			start = head;

			while (start != finish)
			{
				start = start->next;
				finish = finish->next;
			}
			return (start);
		}
		start = start->next;
		finish = (finish->next)->next;
	}
	return (NULL);
}
