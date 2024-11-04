#include "main.h"

/**
 * *_strchr - Locate a character in a string
 * @s: ponter
 * @c: character
 * Return: 0 or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
		s++;
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
	}
}
