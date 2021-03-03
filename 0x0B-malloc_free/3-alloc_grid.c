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

	table = malloc(height * sizeof(int *));

	if (table == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		table[i] = malloc(width * sizeof(int));

		if (table[i] == NULL)
		{
			for (l = 0; l < i; l--)
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
