#include "main.h"

/**
 * *array_range - create an array of integers
 * @min: min value
 * @max: max value
 * Return: NULL or pointer
 */

int *array_range(int min, int max)
{
	int *i, j;

	if (min > max)
	{
		return (NULL);
	}

	i = malloc((max - min + 1) * sizeof(*i));

	if (i == NULL)
	{
		return (NULL);
	}

	for (j = 0; min <= max; j++, min++)
	{
		i[j] = min;
	}

	return (i);
}
