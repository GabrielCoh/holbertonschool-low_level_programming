#include "main.h"

/**
 * isupper - Check for uppercase character
 *@c: character to be checked
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
