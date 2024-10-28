#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 to 9, ignoring 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	char a, b, c;

	b = '2';
	c = '4';

	for (a = '0'; a <= '9' ; a++)
	{
		if (a != b && a != c)
			_putchar(a);
	}

	_putchar('\n');
}
