#include "lists.h"
/**
 * free_dlistint - function that frees a list.
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
