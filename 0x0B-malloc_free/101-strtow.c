#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - frees 2D array.
 * @grid: multidimensional array of char.
 * @height: array height.
 *
 * Return: 0
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - splits str into words.
 * @str: string.
 *
 * Return: pointer or NULL.
 */
char **strtow(char *str)
{
	char **aD;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	aD = malloc(sizeof(char *) * (height + 1));
	if (aD == NULL || height == 0)
	{
		free(aD);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aD[i] = malloc(sizeof(char) * (c - a1 + 2));
				if (aD[i] == NULL)
				{
					ch_free_grid(aD, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			aD[i][j] = str[a1];
		aD[i][j] = '\0';
	}
	aD[i] = NULL;
	return (aD);
}
