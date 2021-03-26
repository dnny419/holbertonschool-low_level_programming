#include "holberton.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: value with the number to be converted
 *
 * Return: converted value
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + 48);
}
