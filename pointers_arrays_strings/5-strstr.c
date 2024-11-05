#include "main.h"

/**
 * *_strstr - locate a substring
 * @haystack: pointer
 * @needle: pointer
 * Return beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *a = needle;

		while (*a)
		{
			if (*haystack == *a)
			{
				return (needle);
			}
			a++;
		}
		haystack++;
	}
	return (NULL);
}
