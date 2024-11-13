#include "main.h"

/**
 * *_calloc - allocate memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = nmemb * size;
	a = malloc(i);
	if (a == NULL)
		return (NULL);
	while (j < i)
	{
		a[j] = 0;
		j++;
	}
	return (a);
}
