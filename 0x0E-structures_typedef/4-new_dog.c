#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog:
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t i, j, k, q;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{
	}
	i++;
	dog->name = malloc(i * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
	}
	j++;
	dog->owner = malloc(j * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		dog->name[k] = name[k];
	dog->age = age;
	for (q = 0; q < j; q++)
		dog->owner[q] = owner[q];
	return (dog);
}
