#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size
 *
 * Return: Nothing.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	int i = 0, _MemSize = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(_MemSize);
	if (a == NULL) /*Failing to allocate memory*/
	{
		return (NULL);
	}

	while (i < _MemSize)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
