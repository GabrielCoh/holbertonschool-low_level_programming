#include "main.h"

/**
 * **alloc_grid - Function that returns a pointer to a 2 dimensional array
 * @width: width of the grid
 * @height: height of the grid
 * Return: NULL or array
 */

int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	i = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	g = malloc(height * sizeof(*g));
	if (g == NULL)
	{
		free(g);
		return (NULL);
	}
	while (i < height)
	{
		g[i] = malloc(width * sizeof(**g));
		if (g[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(g[i]);
				i--;
			}
			free(g);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			g[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	return (g);
}
