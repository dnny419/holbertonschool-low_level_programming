#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: name of the person
 * @f: variable to use as de-reference
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		/* de-referencing and executing the function itself. */
		f(name);
	}
	else
	{
		exit(0);
	}
}
