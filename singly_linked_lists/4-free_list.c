#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the head of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp->str);
		free(temp);
	}

}
