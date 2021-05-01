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

#endif