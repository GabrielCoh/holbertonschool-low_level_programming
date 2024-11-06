#include "main.h"

/**
 * sqrts - used to count and square roots
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: On success 1 and -1 on failure
 */

int sqrts(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrts(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: integer
 * Return: On success 1 and -1 on failure
 */

int _sqrt_recursion(int n)
{
	return (sqrts(n, 1));
}
