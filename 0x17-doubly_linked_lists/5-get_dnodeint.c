#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linkedlist.
 * @head: head
 * @index: index
 * Return: address of the nth
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	size_t c = 0;

	if (head == NULL)
		return (NULL);

	while (tmp != NULL)
	{
		if (head->next == NULL)
			return (NULL);

		if (c == index)
			break;

		tmp = head->next;
		c++;
	}

	return (tmp);
}
