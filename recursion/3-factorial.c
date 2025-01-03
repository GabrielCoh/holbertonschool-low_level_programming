#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: integrer
 * Return: factorial or -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}
