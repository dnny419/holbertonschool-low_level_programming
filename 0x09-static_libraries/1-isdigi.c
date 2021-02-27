#include "holberton.h"
/**
 * _isdigit - determinate if input is a number
 * @input: variable to determinate
 * Return: Always 0. success
 */
int _isdigit(int input)
{
	if ((input >= 48) && (input <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}