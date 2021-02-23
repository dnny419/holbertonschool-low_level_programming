#include "holberton.h"
/**
 * _strstr - Locate a substring
 * @haystack: string
 * @needle: string
 *
 * Return: char
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0 ; *(needle + j) != '\0'; j++)
		{
			return (haystack + i + 5);
		}
	}
	return ('\0');
}
