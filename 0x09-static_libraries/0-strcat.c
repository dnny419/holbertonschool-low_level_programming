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