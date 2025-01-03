#include "main.h"

/**
 * _pow_recursion - Return the value of x raised to the power of y
 * @x: integrer
 * @y: integrer
 * Return: the value of x raised to the power of y or -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
