#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: pointer argument
 * @src: pointer argument
 * @n: integrer
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; dest[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	dest[a] = '\0';

	return (dest);
}
