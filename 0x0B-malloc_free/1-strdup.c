#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - copy a string
 * @str: string
 *
 * Return: char
*/
char *_strdup(char *str)
{
	int i, j;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
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
