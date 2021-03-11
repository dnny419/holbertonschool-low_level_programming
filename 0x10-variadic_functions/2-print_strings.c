#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - function that prints strings, followed by a new line
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
*
* Return: void.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
