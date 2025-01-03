#include "main.h"

/**
 * prime1 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: On success 1 and 0 otherwise
 */

int prime1(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (prime1(a, b + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: integer
 * Return: On success 1 and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime1(n, 2));
}
