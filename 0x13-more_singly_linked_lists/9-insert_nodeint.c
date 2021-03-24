#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: Ptr to the first node
 * @idx: index
 * @n: value to be inserted
 *
 * Return: ptr with the indexed node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (size_t i = 0; i < idx - 1 && tmp != NULL; i++)
		{
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
