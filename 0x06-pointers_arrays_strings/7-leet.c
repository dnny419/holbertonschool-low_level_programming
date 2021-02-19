#include "holberton.h"
/**
 * leet - encode a string into 1337
 * @str: string to encode
 *
 * Return: void
*/
char *leet(char *str)
{
	int a, b;
	char *s;

	s = "aAeEoOtTlL4433007711";
	for (a = 0 ; str[a] != '\0' ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			if (str[a] == s[b])
			{
				str[a] = s[b + 10];
			}
		}
	}
	return (str);
}
