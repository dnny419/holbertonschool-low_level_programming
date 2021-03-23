#include "lists.h"
/**
 * pop_listint -  function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data.
 * @head: string - (malloc'ed string)
 *
 * Return: Nothing.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	tmp = *head;
	*head = tmp->next;
	i = tmp->n;
	free(tmp);

	return (i);
}
