#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to the 2d array else NULL
 */

int **alloc_grid(int width, int height)

{
	int i, j;
	int **k;

	if (width <= 0 || height <= 0)
		return (NULL);
	k = (int **)malloc(sizeof(int *) * height);
	if (k == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		k[i] = (int *)malloc(sizeof(int) * width);
		if (k[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(k[j]);
			}
			free(k);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			k[i][j] = 0;
		}
	}
	return (k);
}
