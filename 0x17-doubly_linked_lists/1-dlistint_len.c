#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linkedlist.
 * @h: head of the node
 * Return: number of elements in a linkedlist.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
