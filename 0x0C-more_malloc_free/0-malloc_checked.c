#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of arguments
 *
 * Return: 98 provided it fails, a otherwise.
*/
void *malloc_checked(unsigned int b)
{
	char *a;

	if (b == 0)
	{
		return (NULL);
	}

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
