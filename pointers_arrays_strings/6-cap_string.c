#include "main.h"

/**
 * *cap_string - Capitalizes all words of a string
 * @s: pointer argument
 * Return: s
 */

char *cap_string(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		if (s[n] >= 'a' && s[n] <= 'z')
		{
			s[n] += 32;
		}
		n++;
	}
	return (s);
}
