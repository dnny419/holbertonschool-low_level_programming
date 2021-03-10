#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array
 * @array: array itself
 * @size: size of the array
 * @action: variable that will execute the function.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* if array and action are different from 0 */
	if (array && action)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
	{
		exit(0);
	}
}
