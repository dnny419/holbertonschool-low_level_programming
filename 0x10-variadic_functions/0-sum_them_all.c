#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - function that returns the sum of all its parameters
* @n: number of parameters
*
* Return: Integer.
*/
int sum_them_all(const unsigned int n, ...)
{
	size_t i, sum = 0;

	/** starting up the macro va_list as to initiliaze the arguments pointer **/
	va_list args;
	/**
	 * Dear future me,
	 * remember to always have a conditional
	 * in case va_list fails!
	**/
	if (args == 0)
	{
		return (0);
	}

	/**
	 * now we gotta point to the first element
	 * so to do that we use the following:
	 *  **/
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		/**
		 * va_arg is used to return the next argument on our list
		 *  previously pointed by args as that's how we've called our pointer
		**/
		sum += va_arg(args, int);
	}
	/**
	 * now that we've stored all we needed we can close the macro
	 * by using va_end and the pointer name.
	 * However, this step is not necessary as it won't be taken into consideration
	 * whilst we use most compilers BUT
	 * just add it to add some portability in your code and do NOT ask.
	**/
	va_end(args);

	/** now we can happily return our sum! **/
	return (sum);
}
