#include "main.h"

/**
 * *string_noncat - concatenate two strings
 * @s1: second string
 * @s2: first string
 * @n: unsigned int
 * Return: NULL or pointer
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		n++;

	c = malloc(sizeof(char) * (n + 1));

	if (c == NULL)
		return (NULL);
	n = 0;

	for (i = 0; s1[i]; i++)
		c[n++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		c[n++] = s2[i];

	return (c);
}
