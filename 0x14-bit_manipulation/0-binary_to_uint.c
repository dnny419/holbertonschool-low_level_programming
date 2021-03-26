#include "holberton.h"
/**
 * binary_to_uint - function that converts a
 * binary number to an unsigned int
 * @b: ptr with binary value
 *
 * Return: res with the decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		res = res << 1;

		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else if (b[i] == '1')
		{
			res = res + 1;
		}
	}

	return (res);
}
