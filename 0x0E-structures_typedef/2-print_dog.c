#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initializes the following elements:
 * @d: ptr address of the dog info
 *
 */
void print_dog(struct dog *d)
{
	/** if the address is different from 0 we can then initialize its elements*/
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
