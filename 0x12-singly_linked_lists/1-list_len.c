#include <stdio.h>
#include "lists.h"
/**
 * list_len - gets the number of nodes in a singly linked list
 * @h: pointer to the head node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
