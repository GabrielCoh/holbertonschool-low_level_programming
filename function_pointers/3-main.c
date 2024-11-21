#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the result of the operations
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a, b;
	char *c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	c = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(c) == NULL || c[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*c == '/' && b == 0) || (*c == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(c)(a, b));
	return (0);
}
