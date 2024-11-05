#include "main.h"

/**
 * *_strstr - locate a substring
 * @haystack: pointer
 * @needle: pointer
 * Return beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j] || haystack[i + j] == '\0')
			{
				return (needle);
			}
		}
	}
	return (NULL);
}
