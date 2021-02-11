#include "holberton.h"
/**
 * _isupper - determinate if c is a capital letter
 * @c: variable to determinate
 * Return: Always 0. success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
