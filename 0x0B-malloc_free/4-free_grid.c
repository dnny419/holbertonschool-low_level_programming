#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid
 * @height: height
 *
 * Return: void
*/
void free_grid(int **grid, int height)
{
	size_t i = 0;

	if (grid == NULL || height <= 0)
	{
		return (NULL);
	}
	while (i < height)
	{
		free(grid[i]);
	}
	free(grid);
}
