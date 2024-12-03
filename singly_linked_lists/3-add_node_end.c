#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list
 * @head: double pointer to the head of the list
 * @str: the string to be duplicated
 * Return: the address of the element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	unsigned int length;

	for (length = 0; str[length] != '\0'; length++)

		if (str == NULL)
			return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = length;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
