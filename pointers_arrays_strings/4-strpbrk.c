#include "main.h"

/**
 * *_strpbrk - Search a string fr any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: s or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
