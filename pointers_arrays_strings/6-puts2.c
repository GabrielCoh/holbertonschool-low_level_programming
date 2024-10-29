#include "main.h"

/**
 * puts2 - Print every other character
 * @str: argument
 * Return: void
 */

void puts2(char *str)
{
	int a;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
			_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
