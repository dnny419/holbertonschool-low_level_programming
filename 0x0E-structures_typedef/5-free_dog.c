#include <stdio.h>
#include "dog.h"
/**
 * free_dog - function that frees dogs by its address:
 * @d: ptr address of the dog info
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	/** if the address is different from 0 we can then initialize its elements*/
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
