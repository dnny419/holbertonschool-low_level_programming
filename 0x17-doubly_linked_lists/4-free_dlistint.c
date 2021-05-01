#include "lists.h"
/**
 * free_dlistint - function that frees a list.
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	for (size_t i = 0; head != NULL; i++)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
