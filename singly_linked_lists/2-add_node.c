#include "lists.h"

/**
 * *add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the head of the list
 * @str: String to be added to the list
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *duplicate;
	size_t length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = duplicate;
	new->len = length;
	new->next = *head;
	*head = new;

	return (new);
}
