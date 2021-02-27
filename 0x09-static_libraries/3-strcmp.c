#include "holberton.h"
/**
 * _strcmp - compare string
 * @s1: ptr dest
 * @s2: ptr src
 *
 * Return: ascii or 0
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; i < s1[i] && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}