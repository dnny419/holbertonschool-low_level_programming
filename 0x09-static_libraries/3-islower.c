#include "holberton.h"

/**
 * _islower - determinate if the character is lowercase or not
 *  @c: The character to print
 * Return: 1 if c is lowercase, return 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}