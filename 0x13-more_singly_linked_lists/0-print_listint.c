#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: string - (malloc'ed string)
 *
 * Return: the number of elements
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
