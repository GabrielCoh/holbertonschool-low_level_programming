#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: Array of elements
 *@size: number of elements
 *@cmp: pointer to compare values
 *Return: -1 or i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);

}
