#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: final count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int c = 0;

	for (i = 0; s[i] != '\0' && s[i] != 32; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
		}
	}
	return (c);
}
