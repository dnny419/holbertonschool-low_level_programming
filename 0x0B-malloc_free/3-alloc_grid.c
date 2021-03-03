#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory which contains a copy of the string given as a parameter.
 * @str: string
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
