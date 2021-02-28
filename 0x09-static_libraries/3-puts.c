#include "holberton.h"
/**
 * _puts - puts
 * @str: variable
 *
 *
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
