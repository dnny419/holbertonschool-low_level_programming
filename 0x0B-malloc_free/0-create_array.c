#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: number of arguments
 * @c: char to specify
 *
 * Return: formated malloc
*/
char *create_array(unsigned int size, char c)
{
	size_t i;
	char a;

	if (size == 0)
	{
		return (NULL);
	}
	a = size * sizeof(char);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
