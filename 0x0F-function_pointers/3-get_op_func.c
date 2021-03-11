#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - operator
 * @s: char
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	int i = 0;

	while (ops[i].op != NULL)
	{
		/**
		 * After comparing our pointer s with our struc ops and its member op
		 * the loop can be stopped as it is not longer necessary.
		 * We will then continue with the next line until it's over
		 * as it has reached null. Therefore,
		 * we can get to use the right operator
		 * as it will be returned on the last line.
		*/
		if (strcmp(s, ops[i].op) == 0)
		{
			break;
		}

		i++;
	}

	return (ops[i].f);
}
