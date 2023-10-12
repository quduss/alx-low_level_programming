#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: pointer to head node of the list
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
