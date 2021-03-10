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
	/**
	* if size is less than or equal to than 0 or array is equal to null
	* or cmp is different from 0 aka it does exist
	*/
	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	/* return -1 in any other weird scenario, DO NOT ask, it just works! */
	return (-1);
}
