#include "lists.h"
/**
 * free_listint2 - function that frees a list_t list.
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
