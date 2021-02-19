#include "holberton.h"
/**
 * rot13 - encode a string with rot13
 * @str: string to encode
 *
 * Return: void
*/
char *rot13(char *str)
{
	int a, b;
	char *s;
	char *s2;

	s = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	s2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b <= 52; b++)
		{
			if (str[a] == s[b])
			{
				str[a] = s2[b];
				break;
			}
		}
	}
	return (str);
}
