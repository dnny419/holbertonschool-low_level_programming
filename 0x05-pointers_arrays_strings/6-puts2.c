#include "holberton.h"
/**
* puts2 - print every other character of a string
* @s: string
*
* Return: void
*/
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar(10);
}
