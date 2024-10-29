#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: string to be printed
 * Return: string to stdout
 */

void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
