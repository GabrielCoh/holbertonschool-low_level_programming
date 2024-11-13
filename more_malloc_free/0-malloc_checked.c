#include "main.h"

/**
 * *malloc_checked - Allocate memory
 * @b: unsigned integrer
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *e;

	e = malloc(b);
	if (e == NULL)
		exit(98);
	return (e);
}
