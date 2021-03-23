#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: Ptr to the first node
 * @index: idx of the node you want to return
 *
 * Return: A ptr to the indexed node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
