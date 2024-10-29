#include "main.h"
#include <stdio.h>

/**
 * print_array - Print elemnts of an array of integrers
 * @a: array of integrers
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
