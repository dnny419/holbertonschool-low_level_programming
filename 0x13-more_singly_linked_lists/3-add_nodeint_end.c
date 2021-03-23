#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list_t list
 * @head: double head pointer
 * @n: string
 * Return: the number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;
	int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (0);
	}

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	for (i = 0; tmp->next != NULL; i++)
	{
		tmp = tmp->next;
	}

	tmp->next = new;

	return (new);
}
