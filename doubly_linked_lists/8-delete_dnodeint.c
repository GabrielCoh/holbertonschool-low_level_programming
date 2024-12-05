#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node from the list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	for (i = 0; i < index; i++)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
	}

	if (!temp)
		return (-1);

	if (temp == *head)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
