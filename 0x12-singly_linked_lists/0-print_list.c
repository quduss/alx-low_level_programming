#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints the elements of each node in a list
 * @h: pointer to the head node of the list
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);
		printf("\n");
		n++;
		h = h->next;
	}
	return (n);
}
