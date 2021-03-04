#include <stdlib.h>
#include "holberton.h"
/**
* _strcat - concadenate two strings
* @dest: ptr dest
* @src: ptr src
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int length, i;

	for (length = 0; dest[length] != '\0'; length++)
	{
		length++;
	}

	for (i = 0; src[i] != '\0'; i++, ++length)
	{
		dest[length] = src[i];
	}
	dest[length] = 0;
	return (dest);
}
/**
* _strlen - get a string lenght
* @s: string
*
* Return: a
*/
int _strlen(char *s)
{
	int a;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers
 * @ac: width
 * @av: height
 *
 * Return: char
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int lon;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		lon = lon + _strlen(av[i]) + 1;
	}
	str = malloc(lon * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		_strcat(str, av[i]);
		_strcat(str, "\n");
	}
	return (str);
}
