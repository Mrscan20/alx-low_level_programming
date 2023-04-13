#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gout;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	gout = malloc(height * sizeof(int *));
	if (gout == NULL)
	{
		free(gout);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gout[i] = malloc(width * sizeof(int));
		if (gout[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gout[i]);
			free(gout);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gout[i][j] = 0;
	return (gout);
}
