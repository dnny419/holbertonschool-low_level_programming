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
	int **table, i, k, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	table = malloc(sizeof(int *) * height);

	if (table == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		table[i] = malloc(sizeof(int) * width);

		if (table[i] == NULL)
		{
			for (l = 0; l <= i; l++)
			{
				free(table[i]);
			}
			free(table);
			return (NULL);
		}

		for (k = 0; k < width; k++)
		{
			table[i][k] = 0;
		}
	}

	return (table);
}
