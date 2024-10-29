#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: pointer
 * Return: void
 */

void print_rev(char *s)
{
	int a;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	while (s[a] != '\0')
	{
		_putchar(s[a--]);
	}
	_putchar('\n');
}
