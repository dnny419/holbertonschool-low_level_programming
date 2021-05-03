#include "holberton.h"
/**
 * _isalpha - determinate if the character is lc or up
 *  @c: The character to print
 * Return: 1 if c is lc OR uc, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
