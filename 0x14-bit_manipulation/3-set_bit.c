#include "holberton.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: number to set
 * @index: index of the number at a given string of numbers
 *
 * Return: 1 or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = 1;

	if (index > 63)
		return (-1);

	return (*n = *n | k << index);
}
