#include "lists.h"

/**
 * sum_dlistint - return the sum of all data (n) of a list
 * @head: pointer to the head of the list
 * Return: su of all date or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
