#include "main.h"

/**
 * *string_toupper - Change all lowercase letters to uppercase
 * @s: pointer argument
 * Return: s
 */

char *string_toupper(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		if (s[n] >= 'a' && s[n] <= 'z')
		{
			s[n] -= 32;
		}
		n++;
	}
	return (s);
}
