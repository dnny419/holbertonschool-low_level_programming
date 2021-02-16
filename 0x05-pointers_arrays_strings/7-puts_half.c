#include "holberton.h"
/**
* puts_half - print half of a string
* @str: string
*
* Return: void
*/
void puts_half(char *str)
{
	int i, a, b;
	a = _strlen(str);
	b = (a - 1) / 2;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (b < i)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}

/**
* _strlen - get a string lenght
* @s: string
*
* Return: a
*/
int _strlen(char *s)
{
	int a;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
