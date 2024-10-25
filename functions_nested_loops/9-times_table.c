#include "main.h"

/**
 * times_table - Print the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int l;
	int c;
	int x;

	for (l = 0 ; l <= 9; l++)
	{
		_putchar('0');

		for (c = 1; c <= 9; c++)
		{
			x = c + l;
			_putchar(',');
			_putchar(' ');
			
			if (x <= 9)
			{	
				_putchar(' ');
				_putchar(x + '0');
			}
			else
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
