#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: argument
 * Return: string to stdout
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
