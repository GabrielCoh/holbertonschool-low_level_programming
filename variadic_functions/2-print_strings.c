#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line
 * @separator: string to be printed inbetween strings
 * @n: number of strings passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list list;
	unsigned int i;
	char *string;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");
	va_end(list);
}
