#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head node of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
