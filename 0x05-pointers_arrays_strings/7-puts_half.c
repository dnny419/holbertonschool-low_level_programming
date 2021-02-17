#include "holberton.h"
/**
* puts_half - print half of a string
* @str: string
*
* Return: void
*/
void puts_half(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}
	if (i % 2 == 0)
	{
		for (i /= 2 ; str[i] != '\0' ; i++)
		{
			_putchar(str[i]);
		}
		_putchar(10);
	}
	else
	{
		i++;
		for (i /= 2 ; str[i] != '\0' ; i++)
		{
			_putchar(str[i]);
		}
		_putchar(10);
	}
}
