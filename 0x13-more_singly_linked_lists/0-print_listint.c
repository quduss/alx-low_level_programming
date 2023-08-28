#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to head node of the list
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
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
