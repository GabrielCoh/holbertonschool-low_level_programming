#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a list. MLP.
 * @h: head of the list.
 * Return: number of node.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
