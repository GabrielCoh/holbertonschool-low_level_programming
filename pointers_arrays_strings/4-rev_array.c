#include "main.h"

/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int l, m;

	l = 0;
	m = 0;
	n -= 1;

	while (l <= (n / 2))
	{
		a[m] = a[l];
		a[l] = a[n];
		a[n] = a[m];
		l++;
		n--;
	}
}
