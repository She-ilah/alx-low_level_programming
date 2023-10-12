#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data of a list
 * @head: head.
 * Return: sum of all data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int data_sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			data_sum += head->n;
			head = head->next;
		}
	}
	return (data_sum);
}
