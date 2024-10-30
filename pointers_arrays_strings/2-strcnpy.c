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
	n = 0;

	for (n = 0; dest[n] != '\0'; n++)
	{
		src[n] = dest[n];
	}
	src[n] = '\0';
	return (0);
}
