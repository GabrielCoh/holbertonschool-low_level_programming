#include "main.h"

/**
 * int_strspn - get the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: final count
 */

unsigned int_strspn(char *s, char *accept)
{
	int i;
	int j;
	int c;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; *accept; j++)
		{
			c++;
			break;
		}
	}
	return (c);
}
