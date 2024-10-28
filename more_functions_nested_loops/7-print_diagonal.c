#include "main.h"

/**
 * print_diagonal - Draw a diagonal line in the terminal
 * @n: The number of lines to draw
 * Return: void
 */

void print_diagonal(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (n = 0; n < a; n++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
