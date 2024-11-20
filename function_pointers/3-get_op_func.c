#include "function_pointers.h"
#include <stddef.h>
#include "3-calc.h"

/**
 * *get_op_func - function operator
 * @s: character
 * @i: integer
 * Return: function return
 */

op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int i;

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (s == ops[i].op && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
