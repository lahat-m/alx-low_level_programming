#include "main.h"

#include <stdlib.h>



/**
 *
 *  alloc_grid - returns a pointer to a 2d int array.
 *  @width: width array.
 *  @height: height array.
 *
 *  Return: pointer or NULL.
 */
int **alloc_grid(int width, int height)
{
	int **gridD;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridD = malloc(height * sizeof(int *));
	if (gridD == NULL)
	{
		free(gridD);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridD[i] = malloc(width * sizeof(int));
		if (gridD[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridD[i]);
			free(gridD);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridD[i][j] = 0;

	return (gridD);
}
