#include "main.h"

/**
 * *leet - Encode a string into 1337
 * @s: pointer argument
 * Return: s
 */

char *leet(char *s)
{
	int n, m;

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (n = 0; s[n] != '\0'; ++n)
	{
		for (m = 0; a[m] != '\0'; m++)
		{
			if (s[n] == a[m])
			{
				s[n] = b[m];
			}
		}
	}
	return (s);
}
