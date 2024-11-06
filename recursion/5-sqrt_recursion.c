#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: integrer
 * Return: the natural root square of a number or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * _sqrt_recursion(n / n));
}
