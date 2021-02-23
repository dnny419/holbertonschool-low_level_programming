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
	char *a = haystack;
	char *b = needle;
	int i;

	while (*haystack !=  '\0')
	{
		for (i = 0; b[i] == a[i] && b[i] != '\0' && a[i] != '\0'; i++)
		{

		}
		if (b[i] == '\0')
			return (a);

		haystack + 1;
	}
	return ('\0');
}
