#include "holberton.h"
/**
* _strncat - copy a string
* @dest: ptr dest
* @src: ptr src
* @n: n bytes
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
