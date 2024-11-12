#include "main.h"

/**
 * *create_array - Create an array of chars
 * @size: unsigned integrer
 * @c: char
 * Return: NULL or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		a[b] = c;

	return (a);
}
