#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - function that creates an array of integers.
 * @min: number of elements
 * @max: size
 *
 * Return: Nothing.
*/
int *array_range(int min, int max)
{
	int *a, i = 0, _MemSize = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	a = malloc(_MemSize * sizeof(int));
	if (a == NULL) /*Failing to allocate memory*/
	{
		return (NULL);
	}

	while (i < _MemSize)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
