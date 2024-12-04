#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node of a list
 * @head: pointer to the head of the list
 * @index: index of the node
 * Return: the node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	if (head == NULL)
		return (NULL);

	for (; index != 0 && head != NULL; index--)
		head = head->next;

	return (head);
}
