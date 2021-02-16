#include "holberton.h"
/**
* puts_half - print half of a string
* @str: string
*
* Return: void
*/
void puts_half(char *str)
{
	int a, k;
	int length;
	int length2;

	length = _strlen(str) / 2;
	length2 = _strlen(str);

	for (a = length, k = 0; a <= length2; a++, k++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
