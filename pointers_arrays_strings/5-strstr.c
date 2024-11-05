#include "main.h"

/**
 * *_strstr - locate a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
