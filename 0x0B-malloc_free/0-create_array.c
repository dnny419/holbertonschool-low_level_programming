#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - function that creates an array of chars
 * @size: number of arguments
 * @c: char to specify
 *
 * Return: char
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
