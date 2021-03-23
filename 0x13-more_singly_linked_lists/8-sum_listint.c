#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: Ptr to the first node
 *
 * Return: result of summed data.
 */
int sum_listint(listint_t *head)
{
	int i, sum = 0;

	for (i = 0; head != NULL; i++)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
