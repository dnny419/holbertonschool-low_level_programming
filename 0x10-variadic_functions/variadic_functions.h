#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	void (*f)(va_list);
} op_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/* prototypes to print everything */
void print_c(va_list v);
void print_i(va_list v);
void print_s(va_list v);
void print_f(va_list v);
void print_all(const char *const format, ...);

#endif /* _VARIADIC_FUNCTIONS_H_ */
