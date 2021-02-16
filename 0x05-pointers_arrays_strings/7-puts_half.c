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
	int a = _strlen(str);
	int b = (a) / 2;

	for (i = b; i < a; i++)
	{
		_putchar(str[i]);
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
