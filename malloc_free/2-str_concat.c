#include "main.h"

/**
 * str_concat - Function that concatenates two strings.
 *@s1: First string
 *@s2: Second string
 *Return: NULL or pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j = 0,  l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		l++;

	c = malloc(sizeof(char) * l);

	if (c == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		c[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		c[j++] = s2[i];

	return (c);
}
