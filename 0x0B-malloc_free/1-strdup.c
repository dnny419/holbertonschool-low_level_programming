#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Return: char
*/
char *_strdup(char *str)
{
	size_t i, j;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}

	i++;
	a = malloc(i * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		arr[j] = str[j];
	}

	return (a);
}
