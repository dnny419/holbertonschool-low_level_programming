#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the sum of all the data (n) of a linkedlist.
 * @head: head
 * Return: summed data otherwise 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);

	size_t c = 0;

	while (head != NULL)
	{

		c += head->n;
		head = head->next;
	}

	return (c);
}
