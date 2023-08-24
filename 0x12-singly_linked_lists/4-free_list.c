#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees every node in a list
 * @head: pointer to the head node
 */

void free_list(list_t *head)
{
	list_t *tempnode;

	while (head->next != NULL)
	{
		tempnode = head->next;
		free(head->str);
		free(head);
		head = tempnode;
	}
	free(head->str);
	free(head);
}
