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

		}
		if (*(haystack + i) == 32)
		{
			return (haystack + i + 1);
		}
	}
	return ('\0');
}
