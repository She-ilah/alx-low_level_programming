#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at the index of the list
 * @head: pointer to pointer to list
 * @index: the node that should be deleted
 *
 * Return: 1 upon success or -1 upon failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *prov;
	unsigned int count;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (count = 0; count < (index - 1); count++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}
	prov = temp->next;
	temp->next = prov->next;
	free(prov);
	return (1);

}
