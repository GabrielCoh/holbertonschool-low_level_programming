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
	char *t, *u;
	unsigned int i, l, j;
	unsigned int size;

	l = 0;
	u = "";
	if (s1 == NULL)
		s1 = u;
	if (s2 == NULL)
		s2 = u;
	while (s1[l] != '\0')
		l++;
	size = (l + n) * sizeof(*t);
	t = malloc(size + 1);
	if (t == NULL)
		return (NULL);
	i = 0;
	while (i < size && s1[i] != '\0')
	{
		t[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		t[i] = s2[j];
		i++;
		j++;
	}
	t[i] = '\0';
	return (t);
}
