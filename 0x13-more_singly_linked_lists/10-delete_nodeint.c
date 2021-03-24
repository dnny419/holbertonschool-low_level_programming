#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list.
 * @head: Ptr to the first node
 * @index: index
 *
 * Return: ptr with the indexed node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i;
	listint_t *tmp, *next;

	if (head == NULL || *head == NULL)
		return (-1);

	if (!index)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	i = 0;
	tmp = *head;
	while (i < index - 1)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}

	next = tmp->next;
	tmp->next = next->next;
	free(next);
	return (1);
}
