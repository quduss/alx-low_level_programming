#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at an index in a linked list
 * @head: pointer to pointer to head node
 * @index: index of node to be deleted
 * Return: 1 if success or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node = NULL;
	listint_t *current_node = NULL;
	listint_t *ptr = *head;
	unsigned int i = 0;

	while (ptr != NULL)
	{
		if (i == (index - 1))
			prev_node = ptr;
		if (i == index)
		{
			current_node = ptr;
			if (prev_node == NULL)
				*head = current_node->next;
			else
				prev_node->next = current_node->next;
			free(current_node);
			return (1);
		}
		i++;
		ptr = ptr->next;
	}
	return (-1);
}
