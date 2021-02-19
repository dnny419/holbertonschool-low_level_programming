#include "holberton.h"
/**
 * cap_string - capitalize all words of a string
 * @str: string to change
 *
 * Return: void
*/
char *cap_string(char *str)
{
	int a, b;
	char aux[] = {' ', '\t', '\n', ',', ';', '.',
		      '!', '?', '"', '(', ')', '{', '}'};

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		for (b = 0 ; aux[b] != '\0' ; b++)
		{
			if (str[0] >= 'a' && str[0] <= 'z')
			{
				str[0] = str[0] - 32;
			}
			else if (str[a] == aux[b] && str[a + 1] >= 'a' && str[a + 1] <= 'z')
			{
				str[a + 1] = str[a + 1] - 32;
			}
		}
	}
	return (str);
}
