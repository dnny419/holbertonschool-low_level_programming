#include "holberton.h"
/**
 * _puts - puts
 * @s: variable
 *
 *
*/
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar(10);
}
