#include "holberton.h"
/**
 * _isupper - determinate if the character is upper
 * @c: character to determinate
 * Return: Always 0. success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
