#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees every node in a list
 * @head: pointer to the head node
 */

void free_list(list_t *head)
{
	list_t *tempnode;

	while (head)
	{
		tempnode = head->next;
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = tempnode;
	}
}
