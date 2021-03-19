#include <stdio.h>

/** Calling the function to be executed before the main function*/
void the_hare(void) __attribute__((constructor));

/**
 * the_hare - Function that prints a string before main function is executed.
 *
 * Return: Nothing.
 */
void the_hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
