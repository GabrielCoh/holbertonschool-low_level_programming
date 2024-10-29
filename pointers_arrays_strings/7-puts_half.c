#include "main.h"

/**
 * puts_half - Print half of a string
 * @str: argument
 * Return: void
 */

void puts_half(char *str)
{
	int a, n;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 == 0)
	{
		n = a / 2;
		while (a > n)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (a + 1) / 2;

		while (a > n)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
