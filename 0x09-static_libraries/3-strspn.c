#include "holberton.h"
/**
 * _strspn - Get the length of a prefix substring
 * @s: string
 * @accept: accepted characters
 *
 * Return: count
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; *(s + i) != 32 && *(s + i) != '\0'; i++)
	{
		for (j = 0 ; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				break;
			}
		}
	}
	return (count);
}