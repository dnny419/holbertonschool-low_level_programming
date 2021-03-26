#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to find
 * @index: index of the number at a given string of numbers
 *
 * Return: number based on its index
 */
int get_bit(unsigned long int n, unsigned int index)
{

	size_t num;

	num = 1;

	if (index > 63)
		return (-1);
	else if (((num << index) & n) == (num << index))
		return (1);
	else
		return (0);
}
