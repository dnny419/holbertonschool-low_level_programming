#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>

/* data structure */
/**
 * struct dlistint_s - double linkedlist
 * @prev: ptr to the previous node
 * @n: integer
 * @next: ptr to the next node
 *
 */

typedef struct dlistint
{
	int n;
	struct dlistint *prev;
	struct dlistint *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);

#endif