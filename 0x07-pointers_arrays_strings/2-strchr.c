#include "holberton.h"
/**
 * _strchr - Returns a pointer to the first occurrence
 * @s: string
 * @c: character
 *
 * Return: s or null
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i < c; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return ('\0');
}
