#include "lists.h"
/**
 * dlistint_len - gets the number of nodes in a doubly linked list
 * @h: pointer to the head node of the list
 * Return: number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
