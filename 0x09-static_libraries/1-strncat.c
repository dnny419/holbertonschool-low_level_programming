#include "holberton.h"
/**
* _strncat - concadenate two strings with n bytes
* @dest: ptr dest
* @src: ptr src
* @n: n bytes
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	for (length = 0; dest[length] != '\0'; length++)
	{

	}

	for (i = 0; src[i] != '\0'; i++, ++length)
	{
		if (i < n)
		{
			dest[length] = src[i];
		}
	}
	dest[length] = 0;
	return (dest);
}