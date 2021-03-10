#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array itself
 * @size: size of the array
 * @cmp: function used to compare values
 *
 * Return: Integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* if size is less than or equal to than 0 or array is equal to null */
	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) && i < size)
		{
			return (i);
		}
	}
	/* return -1 in any other weird scenario, DO NOT ask, it just works! */
	return (-1);
}
