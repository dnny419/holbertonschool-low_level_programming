#include "holberton.h"
/**
 * _isupper - determinate if input is a capital letter
 * @input: variable to determinate
 * Return: Always 0. success
 */
int _isupper(int input)
{
	if (input >= 65 && input <= 98)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
