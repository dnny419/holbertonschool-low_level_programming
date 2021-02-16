#include "holberton.h"
/**
* rev_string - reverse a string
* @s: string
*
* Return: void
*/
void rev_string(char *s)
{
	char aux[100];
	int i, j;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		aux[i] = s[i];
	}
	aux[i] = 0;
	i--;
	for (; i >= 0; i--)
	{
		s[j] = aux[i];
		j++;
	}
}
