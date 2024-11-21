#include "function_pointers.h"

/**
 * op_add - do an addition
 * @a: integer
 * @b: integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - do a substaction
 * @a: integer
 * @b: integer
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - do a multiplication
 * @a: integer
 * @b: integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - do a division
 * @a: integer
 * @b: integer
 * Return: result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - do a division
 * @a: integer
 * @b: integer
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
