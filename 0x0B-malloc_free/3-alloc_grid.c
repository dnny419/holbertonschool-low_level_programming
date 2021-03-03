#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: char
*/
int **alloc_grid(int width, int height)
{
	int **table, i, j, k, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	table = (int **)malloc(sizeof(int *) * height);

	if (table == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		table[i] = (int *)malloc(sizeof(int) * width);

		if (table[i] == NULL)
		{
			for (l = 0; l < i; l++)
				free(table[i]);
			free(table);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			table[j][k] = 0;
		}
	}

	return (table);
}
